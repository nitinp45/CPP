#include <iostream>
using namespace std;
#define Max_Number 20

struct product
{
    int product_id;
    string product_name;
    float product_price;
    float gst;
};
int Inser_at(struct product arr[], int Id, string name, float price, float gst);
int Delete_at(struct product arr[], int Id);
void Display(struct product arr[]);

int Isempty(struct product arr[]);
int main()
{
    struct product a[Max_Number];
    for (int i = 0; i < sizeof(a); i++)
    {
        a[i].product_id = -1;
    }
    int choice;
    while (1)
    {
        cout << "1]For inserting" << endl;
        cout << "2]For deleting" << endl;
        cout << "3]Diplay list" << endl;
        cout << "0 to exsit";
        cout << "Enter choice:";
        cin >> choice;

        if (choice == 0)
        {
            break;
        }
        else
        {
            switch (choice)
            {
            case 1:
            {
                int Id;
                string name;
                float price, gst;

                Inser_at(a, Id, name, price, gst);

                break;
            }
            case 2:
            {
                int ID;
                cout << "Enter Id of product to delete:";
                cin >> ID;
                Delete_at(a, ID);
                break;
            }
            case 3:
            {
                Display(a);
                break;
            }
            default:
            {
                cout << "Enter choice agian" << endl;
            }
            }
        }
    }
    return 0;
}

int NumberOfNode(struct product arr[])
{
    int count;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if (arr[i].product_id != -1)
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    return count;
}
int Inser_at(struct product arr[], int Id, string name, float price, float gst)
{
    if (NumberOfNode(arr) == Max_Number)
    {
        return -1;
    }
    else
    {
        for (int j = 0; j < sizeof(arr)/sizeof(arr[0]); j++)
        {
            if (arr[j].product_id == -1)
            {
                arr[j].product_id = Id;
                arr[j].product_name = name;
                arr[j].product_price = price;
                arr[j].gst = gst;
                break;
            }
            else
            {
                continue;
            }
        }
    }
}

int Delete_at(struct product arr[], int Id)
{
    if (NumberOfNode(arr) == 0)
    {
        return -1;
    }
    else
    {
        int i = 0;
        for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
        {
            if (arr[i].product_id == Id)
            {
                arr[i].product_id = -1;
                return 0;
            }
        }
        if (i == sizeof(arr)/sizeof(arr[0]))
        {
            return -1;
        }
    }
}
void Display(struct product arr[])
{
    if (NumberOfNode == 0)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        for (int j = 0; j < sizeof(arr)/sizeof(arr[0]); j++)
        {
            if (arr[j].product_id != -1)
            {
                cout << "Product Id:" << arr[j].product_id << endl;
                cout << "Product name:" << arr[j].product_name << endl;
                cout << "Product price" << arr[j].product_price << endl;
                cout << "Product gst:" << arr[j].gst << endl;
            }
        }
        cout << endl;
    }
}
