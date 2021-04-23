#include "Orders.h"

void Orders::showOrdList(list <OrdinaryOrder> ordList)
{
    for (OrdinaryOrder i : ordList)
    {
        cout << i << endl;
    }
}

void Orders::showExpList(list <ExpressOrder> expList)
{
    for (ExpressOrder i : expList)
    {
        cout << i << endl;
    }
}

void Orders::showInsList(list <InsuredOrder> insList)
{
    for (InsuredOrder i : insList)
    {
        cout << i << endl;
    }
}

void Orders::show()
{
    int* idO = new int[ordList.size()];
    int* idE = new int[expList.size()];
    int* idI = new int[expList.size()];
    Time_* timeO = new Time_[ordList.size()];
    Time_* timeE = new Time_[expList.size()];
    Time_* timeI = new Time_[expList.size()];
    Date* dateO = new Date[ordList.size()];
    Date* dateE = new Date[expList.size()];
    Date* dateI = new Date[expList.size()];
    int c = 0;
    
    short menu;
    this->showOrdList(this->ordList);
    this->showExpList(this->expList);
    this->showInsList(this->insList);
    cout << "-----------------------------------------------------------" << endl;
    cout << "1.Sort by id" << endl;
    cout << "2.Sort by date" << endl;
    cout << "3.Sort by time" << endl;
    cout << "4.Sort by type" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cin >> menu;
    switch (menu)
    {
    case 1:
        for (OrdinaryOrder i : ordList)
        {
            idO[c] = i.getId();
            c++;
        }
        c = 0;
        for (ExpressOrder i : expList)
        {
            idE[c] = i.getId();
            c++;
        }
        c = 0;
        for (InsuredOrder i : insList)
        {
            idI[c] = i.getId();
            c++;
        }
        c = 0;
        sort(idO, idO + sizeof(idO));
        sort(idE, idE + sizeof(idE));
        sort(idI, idI + sizeof(idI));

        for (int count = 0; count < sizeof(idO); count++)
        {
            for (OrdinaryOrder i : ordList)
            {
                if (idO[count] == i.getId())
                {
                    i.toString();
                    break;
                }
                else continue;
            }
        }
        for (int count = 0; count < sizeof(idO); count++)
        {
            for (ExpressOrder i : expList)
            {
                if (idE[count] == i.getId())
                {
                    i.toString();
                    break;
                }
                else continue;
            }
        }
        for (int count = 0; count < sizeof(idO); count++)
        {
            for (InsuredOrder i : insList)
            {
                if (idI[count] == i.getId())
                {
                    i.toString();
                    break;
                }
                else continue;
            }
        }
        break;
    case 2:
        for (OrdinaryOrder i : ordList)
        {
            timeO[c] = i.getTime();
            c++;
        }
        c = 0;
        for (ExpressOrder i : expList)
        {
            timeE[c] = i.getTime();
            c++;
        }
        c = 0;
        for (InsuredOrder i : insList)
        {
            timeI[c] = i.getTime();
            c++;
        }
        c = 0;
        sort(timeO, timeO + sizeof(timeO));
        sort(timeE, timeE + sizeof(timeE));
        sort(timeI, timeI + sizeof(timeI));
        for (int count = 0; count < sizeof(timeO); count++)
        {
            for (OrdinaryOrder i : ordList)
            {
                if (timeO[count] == i.getTime())
                {
                    i.toString();
                    break;
                }
                else continue;
            }
        }
        for (int count = 0; count < sizeof(timeO); count++)
        {
            for (ExpressOrder i : expList)
            {
                if (timeE[count] == i.getTime())
                {
                    i.toString();
                    break;
                }
                else continue;
            }
        }
        for (int count = 0; count < sizeof(timeO); count++)
        {
            for (InsuredOrder i : insList)
            {
                if (timeI[count] == i.getTime())
                {
                    i.toString();
                    break;
                }
                else continue;
            }
        }
        break;
    case 3:
        for (OrdinaryOrder i : ordList)
        {
            dateO[c] = i.getDate();
            c++;
        }
        c = 0;
        for (ExpressOrder i : expList)
        {
            dateE[c] = i.getDate();
            c++;
        }
        c = 0;
        for (InsuredOrder i : insList)
        {
            dateI[c] = i.getDate();
            c++;
        }
        c = 0;
        sort(dateO, dateO + sizeof(dateO));
        sort(dateE, dateE + sizeof(dateE));
        sort(dateI, dateI + sizeof(dateI));
        for (int count = 0; count < sizeof(dateO); count++)
        {
            for (OrdinaryOrder i : ordList)
            {
                if (dateO[count] == i.getDate())
                {
                    i.toString();
                    break;
                }
                else continue;
            }
        }
        for (int count = 0; count < sizeof(dateO); count++)
        {
            for (ExpressOrder i : expList)
            {
                if (dateE[count] == i.getDate())
                {
                    i.toString();
                    break;
                }
                else continue;
            }
        }
        for (int count = 0; count < sizeof(dateO); count++)
        {
            for (InsuredOrder i : insList)
            {
                if (dateI[count] == i.getDate())
                {
                    i.toString();
                    break;
                }
                else continue;
            }
        }
        break;
    case 4:
        this->showOrdList(this->ordList);
        this->showExpList(this->expList);
        this->showInsList(this->insList);
        break;
    default:
        break;
        delete[] dateI;
        delete[] dateE;
        delete[] dateO;
        delete[] timeI;
        delete[] timeE;
        delete[] timeO;
        delete[] idI;
        delete[] idE;
        delete[] idO;
    }
}


void Orders::add()
{
    int idT;
    string courierT;
    int daysToDeliverT;
    Date dateT;
    Time_ timeT;
    string companyT;
    double amountT;
    short x;
    OrdinaryOrder ord;
    ExpressOrder exp;
    InsuredOrder ins;
    cout << "Enter type of order: " << endl;
    cout << "1.Ordinary" << endl;
    cout << "2.Express" << endl;
    cout << "3.Insured" << endl;
    cin >> x;

    switch (x)
    {
    case 1:
        cout << "Enter id: "<< endl;
        cin >> idT;
        cout << "Enter date: " << endl;
        cin >> dateT;
        cout << "Enter time: " << endl;
        cin >> timeT;
        try
        {
            if (idT <= 0) throw "Error id isnt valid!";
            if (!dateT.valid()) throw "Error date isnt valid!";
            if (!timeT.valid()) throw "Error time isnt valid!";
        }
        catch(const char* msg)
        {
            cout << msg << endl;
        }
        ord.setId(idT);
        ord.setDate(dateT);
        ord.setTime(timeT);
        ordList.push_front(ord);
        break;
    case 2:
        cout << "Enter id: " << endl;
        cin >> idT;
        cout << "Enter date: " << endl;
        cin >> dateT;
        cout << "Enter time: " << endl;
        cin >> timeT;
        cout << "Enter courier: " << endl;
        cin >> courierT;
        cout << "Enter days to deliver: " << endl;
        cin >> daysToDeliverT;
        try
        {
            if (idT <= 0) throw "Error id isnt valid!";
            if (!dateT.valid()) throw "Error date isnt valid!";
            if (!timeT.valid()) throw "Error time isnt valid!";
            if (daysToDeliverT<=0) throw "Error days to deliver isnt valid!";
        }
        catch (const char* msg)
        {
            cout << msg << endl;
        }
        exp.setId(idT);
        exp.setDate(dateT);
        exp.setTime(timeT);
        exp.setCourier(courierT);
        exp.setDaysToDeliver(daysToDeliverT);
        expList.push_front(exp);
        break;
    case 3:
        cout << "Enter id: " << endl;
        cin >> idT;
        cout << "Enter date: " << endl;
        cin >> dateT;
        cout << "Enter time: " << endl;
        cin >> timeT;
        cout << "Enter company: " << endl;
        cin >> companyT;
        cout << "Enter amount: " << endl;
        cin >> amountT;
        try
        {
            if (idT <= 0) throw "Error id isnt valid!";
            if (!dateT.valid()) throw "Error date isnt valid!";
            if (!timeT.valid()) throw "Error time isnt valid!";
            if (amountT <= 1) throw "Error amount isnt valid!";
        }
        catch (const char* msg)
        {
            cout << msg << endl;
        }
        ins.setId(idT);
        ins.setDate(dateT);
        ins.setTime(timeT);
        ins.setAmount(amountT);
        ins.setCompany(companyT);
        insList.push_front(ins);
        break;
    default:
        break;
    }
}

void Orders::delete_()
{
    
}
