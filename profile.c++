#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string FirstName, LastName, FullName, FavoriteMeal, FavoriteMovie;
    cout<<"Enter your first name";
    cin>>FirstName;
    cout<<"Enter your last name";
    cin>>LastName;
    cout<<"Enter your full name";
    getline(cin, FullName);
    cout<<"Enter your favorite meal";
    getline(cin, FavoriteMeal);
    cout<<"Enter your Favorite Movie";
    getline(cin, FavoriteMovie);


    cout<<" first name is " <<FirstName<< "  my last name is " <<LastName<< " my full name is " <<FullName<< " , favorite meal is " <<FavoriteMeal<< "  favorite movie is " <<FavoriteMovie<<endl;

}
