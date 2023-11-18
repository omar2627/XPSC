/*
OMAR
          x
          /\
         /_\
        /_t2\
       /_t1_\     H
          a
        a=1
amk ekta isosceles triangle(shomodi bahu trivuje) shape er ekta carrot dibe and shate ekta height dewa thakbe ISOSCELES TRIANGLE  er
base(a) hobe 1.we know isosceles triangle er duita bahu same. ekhon question holo ei triangle ke (n-1) vage vag korte hobe.
vag korle (n-1) ta trapezium hobe . ekhon isosceles er upper(x) theke every trapezium er upper base er height ber korte hobe.
trapezium er area nibo lower base(a) theke ekbare upper base(t2) porjonto .t1 and t2 ke ekta trapezium dore ekta height ber
korbo binary search er maddome .

Area of Trapezium=(1/2)*( upper_base + lower_base ) * height

Area of Triangle(Carrot)=0.5*total_height.* base

Area of each part= A_O_T/n;  shomodibahu er area ke n diya bag korle n bag er area pawa jabe jekhane shobar uporer ta hobe
                                                 triangle er area baki nicher gula hobe Trapezium  er area. Area jani ekhon every t

*/

#inlcude<bits/stdc++.h>
usinsg namespace std;

int main()
{
    double n;cin>>n>>height;
    double total_area_isosceles=0.5*base*height;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

double eps = 1e-6, n, height, total_area, each;

double cut_height(double need) {
    double low = 0, high = height, cut, base_of_cut, area_of_cut;
    while(high - low > eps) {
        cut = low + (high - low) / 2.0;
        base_of_cut = (height - cut) / height;
        area_of_cut = 0.5 * (base_of_cut + 1.0) * cut;

        if(area_of_cut < need)
            low = cut;
        else if(area_of_cut > need)
            high = cut;
        else
            break;
    }
    return height - cut;
}

int main() {
    cin >> n >> height;
    total_area = 0.5 * height;
    each = total_area / n; //প্রত্যেক ভাগে যতো করে এরিয়া পড়বে।

    for(double i = n - 1.0; i >= 1.0; i -= 1.0) { //n - 1 থেকে লুপ কারণ নিচে থেকে হিসাব করতেসি।
        double area_from_root = i * each; //গুণ কারন এরিয়ার হিসাব ভূমি থেকে করা হচ্ছে, চিত্র দেখলেই বুঝা যায়
        cout << fixed << setprecision(13) << cut_height(area_from_root) << " ";
    }

    return 0;
}

/**
 * PROBLEM SUMMARY: Equal Area Triangle Sections
 *
 * Igor has adopted n little bunnies and has an isosceles triangle-shaped carrot
 * with a base length of 1 unit and height h units. He wants to cut the carrot
 * into n pieces of equal area for the bunnies by making n - 1 cuts parallel
 * to the base. The challenge is to determine the positions of the cuts to
 * ensure equal areas.
 *
 * The area of the isosceles triangle (carrot) is calculated as (base * height)
 * / 2. Each piece must have an area of (total area / n).
 *
 * The goal is to find the distances from the apex (top) of the triangle to each
 * cut, ensuring that the area below each cut (and above the previous cut, if
 * any) is equal.
 *
 * Triangle Visualization (not to scale):
 *
 *         /\
 *        /  \
 *       /    \ <-- Cut 1 (distance x1 from apex)
 *      /------\
 *     /        \ <-- Cut 2 (distance x2 from apex)
 *    /----------\
 *   /____________\ <-- Base
 *
 * INPUT:
 * The input contains two space-separated integers, n and h (2 <= n <= 1000, 1
 * <= h <= 10^5).
 *
 * OUTPUT:
 * The output should contain n - 1 real numbers x1, x2, ..., xn-1, representing
 * the distances from the apex to each cut. The output is considered correct if
 * the absolute or relative error of each number doesn't exceed 10^-6.
 *
 * Example:
 * Input: 3 2
 * Output: 1.154700538379 1.632993161855
 *
 * The cuts at distances x1 and x2 from the apex divide the triangle into three
 * sections of equal area.
 *
 * APPROACH:
 * A binary search algorithm is used to determine the height at which each cut
 * should be made to achieve the equal areas. This involves iteratively
 * adjusting the cut position and calculating the area of the trapezoid formed
 * until the desired precision is reached.
 */
