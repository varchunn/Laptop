#include <iostream>
using namespace std;

class Mtrx 
{
    string type;
    int res;

public:
    Mtrx(string t, int r) : type(t), res(r) {}
    void show() 
    {
        cout << "Matrix: " << type << ", Res: " << res << "p" << endl;
    }
};

class Mnt 
{
    Mtrx mtrx;

public:
    Mnt(Mtrx m) : mtrx(m) {}
    void show()
    {
        cout << "Monitor:\n";
        mtrx.show();
    }
};

class CPU
{
    string model;
    double freq;
public:
    CPU(string m, double f) : model(m), freq(f) {}
    void show() 
    { cout << "CPU: " << model << ", Freq: " << freq << " GHz" << endl;
    }
};

class RAM 
{
    int size;
    string type;

public:
    RAM(int s, string t) : size(s), type(t) {}
    void show() 
    {
        cout << "RAM: " << size << "GB, Type: " << type << endl;
    }
};

class Batt 
{
    int cap;
    int cells;

public:
    Batt(int c, int cl) : cap(c), cells(cl) {}
    void show()
    {
        cout << "Battery: " << cap << "mAh, Cells: " << cells << endl;
    }
};

class Mbrd
{
    string chipset;
    int slots;

public:
    Mbrd(string ch, int sl) : chipset(ch), slots(sl) {}
    void show()
    { cout << "Motherboard: " << chipset << ", Slots: " << slots << endl;
    }
};

class Cse 
{
    CPU cpu;
    RAM ram;
    Batt batt;
    Mbrd mbrd;

public:
    Cse(CPU c, RAM r, Batt b, Mbrd m) : cpu(c), ram(r), batt(b), mbrd(m) {}
    void show() 
    {
        cout << "Case:\n";
        cpu.show();
        ram.show();
        batt.show();
        mbrd.show();
    }
};

class Lptp 
{
    Cse cse;
    Mnt mnt;

public:
    Lptp(Cse cs, Mnt mn) : cse(cs), mnt(mn) {}
    void show()
    {
        cout << "Laptop Details:\n";
        cse.show();
        mnt.show();
    }
};

int main() 
{
  
    Mtrx mtrx("IPS", 1080);
    Mnt mnt(mtrx);
    CPU cpu("Intel", 3.5);
    RAM ram(16, "DDR4");
    Batt batt(5000, 4);
    Mbrd mbrd("Intel Z490", 4);
    Cse cse(cpu, ram, batt, mbrd);
    Lptp laptop(cse, mnt);
    laptop.show();

    return 0;
}
