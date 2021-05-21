#include<iostream>
#include<cmath>
#include<complex>
//#include<<algorithm>

using namespace std;

double L = 910, H = 560, alpha=0.5, coulomb_prefactor = 1.0, PI = 3.1416, epsilon = 1.2;
int    kmax = 3, NP = 460;


//double Ewald();
double Ewald_r_space(double arrX[], double arrY[], double arrZ[], double arrQ[]);
double Ewald_k_space(double arrX[], double arrY[], double arrZ[], double arrQ[]);
double Ewald_self(double arrQ[]);

int main(){

        //int    num_ves = data.getnum_members('v');  // #nanoparticles
        //int    numab = data.getnum_antibody();      // #ligands on particle
        //int    numant = data.getnum_members('c');   // #receptors on cell
        //int    NP;      //total number of charged sites in the simulation box
        double arr_xab [106], arr_yab [106], arr_zab [106]; //arrays for ligand (antibody) coordinates
        double arr_xant [300], arr_yant [300], arr_zant [300]; //arrays for receptor (antigens) coordinates
        //double rcut = data.get_rcut(); //real space cutoff
        //double kmax = data.get_kmax(); //reciprocal (k) space cutoff
        //double alpha = data.get_alpha(); // Ewald splitting parameter (unit nm^-1)
        //double eps0 = 8.854e-12; //vacuum permittivity, epsilon0 in SI unit C^2.N^-1.m^-2
        //double epsr = 5.26e3; //relative permittivity of blood plasma at 1 kHz frequency is 5.26e3 (dimensionless)
        //from https://itis.swiss/virtual-population/tissue-properties/database/dielectric-properties/
        //double epsilon = eps0*epsr; //absolute permittivity = vacuum permittivity * relative permittivity, in C^2.N^-1.m^-2
        //double coulomb_prefactor = 1.0/(4*PI*epsilon); // Coulomb prefactor, in N.m^2.C^-2.

        //combine the x,y,z coordinates of ligand and receptor tips into three arrays
        for (int i = 0; i < 1; ++i) {
            for (int j = 0; j < 106; ++j) {
                //get the x,y,z coordinates of ligand tips and store them in arrays
                arr_xab [j] = 111.11;
                arr_yab [j] = 222.22;
                arr_zab [j] = 333.33;
            }
        }

        for (int i = 0; i < 300; ++i) {
            //get the x,y,z coordinates of receptor tips and store them in arrays
            arr_xant [i] = 333.33;
            arr_yant [i] = 222.22;
            arr_zant [i] = 111.11;
        }

        //define m and n such that m + n will be the dimension of the combined arrays
        int m = sizeof(arr_xab)/sizeof(arr_xab[0]);
        int n = sizeof(arr_xant)/sizeof(arr_xant[0]);
        //array of all the x-coordinates for both ligand and receptor tips: arrX
        double arrX[m + n];
        copy(arr_xab, arr_xab + m, arrX);
        copy(arr_xant, arr_xant + n, arrX + m);
        //array of all the y-coordinates for both ligand and receptor tips: arrY
        double arrY[m + n];
        copy(arr_yab, arr_yab + m, arrY);
        copy(arr_yant, arr_yant + n, arrY + m);
        //array of all the z-coordinates for both ligand and receptor tips: arrZ
        double arrZ[m + n];
        copy(arr_zab, arr_zab + m, arrZ);
        copy(arr_zant, arr_zant + n, arrZ + m);

        // #charged particles, NP = #ligands + #receptors = m + n
        //NP = m + n;

        // define an array, arrQ for appointing charge at the ligand receptor tips
        // for ligands (+1.0) and for receptors (-1.0)
        double arrQ [m + n];
        for (int i = 0; i < m + n; i++){
            if (i < m)
                arrQ [i] = 1.0;
            else
                arrQ [i] = -1.0;
        }

        // initialize Coulomb energy for electrostatic interactions
        double E_Coulomb = 0.0;

        /* calculate the real space contribution to the coulomb energy */
        E_Coulomb += Ewald_r_space(arrX,arrY,arrZ,arrQ);

        /* calculate the reciprocal (k) space contribution to the coulomb energy */
        //E_Coulomb += Ewald_k_space(arrX,arrY,arrZ,arrQ);

        //subtract the self-interaction energy
        E_Coulomb -= Ewald_self(arrQ);

        //add the dipole energy (optional)
        //E_Coulomb += Ewald_dipol(arrX,arrY,arrZ,arrQ);
        //cout<<E_Coulomb<<endl;
        
        for (int i=0;i<406;i++){
            cout<<arrX[i]<<endl;
        }
        return 0;
}

// function for squaring a value
double SQR (double x) { return x*x; }
// function for rounding a value
double dround (double x) { return floor(x+0.5); }

//to compute the real space energy
double Ewald_r_space(double arrX[], double arrY[], double arrZ[], double arrQ[])
    {
        int    t1,t2;
        double dx,dy,dz,r,r2,ar,ar2;
        double d1=0.0;
        //double L = data.getperiodic_box_length(); // box length in x and y
        //double H = data.getperiodic_box_height(); // box height (length in z)
        double Li = 1/L; // inverse of length
        double Hi = 1/H; // inverse of height
        double rmaxL=L/2.1, rmaxL2, rmaxH=H/2.1, rmaxH2; // real space cutoff (has to be less than half for minimum
        // image convention) and their squares.
	    //int    num_ves = data.getnum_members('v'); // #nanoparticles
        //int    numab = data.getnum_antibody(); // #ligands on particle
	    //int    numant = data.getnum_members('c'); // #receptors on cell
	    //int    NP = numab + numant;
	    //double coulomb_prefactor = 1.0;
	
        rmaxL2  = SQR(rmaxL);
        rmaxH2  = SQR(rmaxH);

        //calculate the real energy
        for (t1 = 0; t1 < NP-1; t1++)
            for (t2 = t1 + 1; t2 < NP; t2++) {
                dx = arrX[t1] - arrX[t2]; dx -= dround(dx*Li)*L;
                dy = arrY[t1] - arrY[t2]; dy -= dround(dy*Li)*L;
                dz = arrZ[t1] - arrZ[t2]; dz -= dround(dz*Hi)*H; //nm
                r2 = SQR(dx) + SQR(dy) + SQR(dz); //nm^2
                r  = sqrt(r2); //nm
                if (r2 <= rmaxL2 && r2 <= rmaxH2) {
                    ar = alpha * r; //dimensionless
                    d1 +=  coulomb_prefactor * arrQ[t1] * arrQ[t2] * (erfc(ar) / (r*1e-9)) ; //all in SI unit
                }
            }
        return d1; //energy in Joule (J)
    }
/*
//to compute the k space energy
double Ewald_k_space(double arrX[], double arrY[], double arrZ[], double arrQ[]){
	
	    //int    num_ves = data.getnum_members('v'); // #nanoparticles
        //int    numab = data.getnum_antibody(); // #ligands on particle
        //int    numant = data.getnum_members('c'); // #receptors on cell
        //int    NP = numab + numant;
        //double coulomb_prefactor = 1.0;

        complex <double> ak;
        double ksqr, kdotr, qi, tmp, tmp2;
        double aa,bb,akak, mx,my,mz, chak, kx, ky, kz;
        //double alpha = data.get_alpha(); // Ewald splitting parameter
        double GAMMA = -1/(4*alpha*alpha); //nm^2
        //double ONE_PI_EPS0 = 1.0;
        //double L = data.getperiodic_box_length(); // box length in x and y
        //double H = data.getperiodic_box_height(); // box length in z
        double box_VOL = L*L*H;
        double recip = coulomb_prefactor * 2* PI / (box_VOL*1e-27); //in N.m^-1.C^-2.
        double U_CF = 0.0;

        for(int kx = -kmax; kx <= kmax ; kx++)
        {
            mx = 2*PI*kx/L; //nm^-1
            for(int ky = -kmax; ky <= kmax ; ky++)
            {
                my = 2*PI*ky/L;
                for(int kz = -kmax; kz <= kmax ; kz++)
                {
                    mz = 2*PI*kz/H;
                    ksqr = mx*mx + my*my + mz*mz; //nm^-2
                    if(ksqr != 0)
                    {
                        ak.real(0);
                        ak.imag(0);
                        for(int i = 0; i < NP; i++)
                        {
                            kdotr = mx*arrX[i] + my*arrY[i] + mz*arrZ[i]; //dimensionless
                            qi = arrQ[i]; //coulomb (C)
                            ak.real() += qi*cos(kdotr); //coulomb (C)
                            ak.imag() -= qi*sin(kdotr);
                        }
                        aa = ak.real();
                        bb = ak.imag();
                        akak = (aa*aa + bb*bb); //coulomb^2 (C^2)
                        tmp = recip * exp(GAMMA * ksqr)/(ksqr*1e-18); //N.m.C^-2
                        U_CF += tmp * akak; //in N.m or Joule (J)
                    }
                }
            }
        }
        return U_CF; // in Joule (J)
    }
*/
//self-interaction energy (Github)
double Ewald_self(double arrQ[])
    {
        double SR_PI = -alpha/sqrt(PI); //dimless
	
	    //int    num_ves = data.getnum_members('v'); // #nanoparticles
        //int    numab = data.getnum_antibody(); // #ligands on particle
        //int    numant = data.getnum_members('c'); // #receptors on cell
        //int    NP = numab + numant;
        //double coulomb_prefactor = 1.0;	//in N.m^2.C^-2.
	    //double ONE_PI_EPS0 = 1.0;

        double U_CS = 0.0;

        for(int i = 0; i < NP; i++)
        {
            U_CS += arrQ[i] * arrQ[i]; //C^2
        }
        U_CS *= coulomb_prefactor * SR_PI;
	
	return U_CS;   
 }

//dipole energy (optional), should be omitted for mobile ions such as our case
//(similar to "tin-foil" or conducting surface boundary condition).
double Ewald_dipol(double arrX[], double arrY[], double arrZ[], double arrQ[])
    {
        double dipx=0.0, dipy=0.0, dipz=0.0,prefactor = 1.0;
        double dipfac = 2.0*PI / ((1.0 + 2.0*epsilon) * L*L*H);
        double d1=coulomb_prefactor*dipfac, d2=0.0;
        int    i;

	    //int    num_ves = data.getnum_members('v'); // #nanoparticles
        //int    numab = data.getnum_antibody(); // #ligands on particle
        //int    numant = data.getnum_members('c'); // #receptors on cell
        //int    NP = numab + numant;
        //double coulomb_prefactor = 1.0;
        //double ONE_PI_EPS0 = 1.0;


        for (i=0; i<NP; i++) {
            dipx += arrQ[i]*arrX[i];
            dipy += arrQ[i]*arrY[i];
            dipz += arrQ[i]*arrZ[i];
        }

        d2 += d1 * ( SQR(dipx) + SQR(dipy) + SQR(dipz) );

        return d2;
    }
/*
    // compute the real space part of the Kolafa Perram error estimate
public: double compute_KPerr_r(double alpha) {

        double res;

        res = Q2*sqrt(rmax/(2.0*L*L*H)) * exp(-SQR(alpha)*rmax2) / (SQR(alpha)*rmax2); //C^2.nm^-1

        return res;
    }

    // compute the k space part of the Kolafa Perram error estimate
public: double compute_KPerr_k(double alpha) {

        double res;

        res = Q2 * alpha* exp(-SQR(PI*kmax/(alpha*L))) / (SQR(PI) * pow(kmax, 1.5)); //C^2.nm^-1

        return res;
    }

    // use bisectional method to get optimal alpha value
public: static void compute_optimal_alpha(void) {

        double alpha_low, f_low;
        double alpha_high, f_high;
        double alpha_guess, f_guess;
        double ALPHA_OPT_PREC = 1.0e-10;

        alpha_low = 0.01;
        alpha_high = 10.0;

        f_low = compute_KPerr_r(alpha_low) - compute_KPerr_k(alpha_low);
        f_high = compute_KPerr_r(alpha_high) - compute_KPerr_k(alpha_high);

        if (f_low*f_high > 0.0) {
            printf("Error: Could not init method to find optimal alpha!\n");
            exit(1);
        }

        do {
            alpha_guess = 0.5 *(alpha_low + alpha_high);
            f_guess = compute_KPerr_r(alpha_guess) - compute_KPerr_k(alpha_guess);
            if (f_low*f_guess < 0.0) alpha_high = alpha_guess;
            else alpha_low = alpha_guess;
        } while (fabs(alpha_low-alpha_high) > ALPHA_OPT_PREC);

        alpha = 0.5 *(alpha_low + alpha_high);
    }
*/
