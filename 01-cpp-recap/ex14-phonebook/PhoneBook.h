#ifndef PhoneBook_h
#define PhoneBook_h

const int kMaxStr = 20;

struct Contact{
    char name[kMaxStr];
    char phone[kMaxStr];
};

class PhoneBook{
public:
    PhoneBook();
    ~PhoneBook();
    
    bool IsEmpty();
    bool IsFull();
    void PrintAll();
    void PrintContact(int i);
    void AddContact();
    void AddContact(const char name[], const char phone[]);
    int FindByName();
    bool IsEqual(const char str1[], const char str2[]);
    void DeleteByName();
    
private:
    int capacty_ = 3; // 연락처 최대 개수(변경가능)
    int num_contacts_ = 0;
    Contact *contacts_ = nullptr;
};

#endif /* PhoneBook_h */
