#include <bits/stdc++.h>
using namespace std;

struct node
{
    int duLieu;
    struct node *next;
};

node *taoNode(int x)
{
    node *nodeMoi = new node();
    nodeMoi->duLieu = x;
    nodeMoi->next = NULL;
    return nodeMoi;
}

int kichThuoc(node *head)
{
    int dem = 0;
    while (head != NULL)
    {
        ++dem;
        head = head->next;
    }
    return dem;
}

void duyet(node *head)
{
    while (head != NULL)
    {
        cout << head->duLieu << ' ';
        head = head->next;
    }
    cout << endl;
}

void themDau(node **head, int x)
{
    node *nodeMoi = taoNode(x);
    nodeMoi->next = (*head);
    (*head) = nodeMoi;
}

void themCuoi(node **head, int x)
{
    node *nodeMoi = taoNode(x);
    if (*head == NULL)
    {
        *head = nodeMoi;
        return;
    }
    node *tam = *head;
    while (tam->next != NULL)
    {
        tam = tam->next;
    }
    tam->next = nodeMoi;
}

void chen(node **head, int k, int x)
{
    int n = kichThuoc(*head);
    if (k < 1 || k > n + 1)
        return;
    if (k == 1)
    {
        themDau(head, x);
        return;
    }
    node *tam = *head;
    for (int i = 1; i <= k - 2; i++)
    {
        tam = tam->next;
    }
    // tam : k - 1
    node *nodeMoi = taoNode(x);
    nodeMoi->next = tam->next;
    tam->next = nodeMoi;
}

void xoaDau(node **head)
{
    if (*head == NULL)
        return;
    node *tam = *head; // giai phong
    *head = (*head)->next;
    delete tam;
}

void xoaDau2(node *&head)
{
    if (head == NULL)
        return;
    node *tam = head;
    head = head->next;
    delete tam;
}

void xoaCuoi(node **head)
{
    if (*head == NULL)
        return;
    node *tam = *head;
    if (tam->next == NULL)
    {
        *head = NULL;
        delete tam;
        return;
    }
    while (tam->next->next != NULL)
    {
        tam = tam->next;
    }
    node *cuoi = tam->next; // node cuoi
    tam->next = NULL;
    delete cuoi;
}

void xoaCuoi2(node *&head)
{
    if (head == NULL)
        return;
    node *tam = head;
    if (tam->next == NULL)
    {
        head = NULL;
        delete tam;
        return;
    }
    while (tam->next->next != NULL)
    {
        tam = tam->next;
    }
    node *cuoi = tam->next; // node cuoi
    tam->next = NULL;
    delete cuoi;
}

void xoa(node **head, int k)
{
    int n = kichThuoc(*head);
    if (k < 1 || k > n)
        return; // ko xoa
    if (k == 1)
        xoaDau(head);
    else
    {
        node *tam = *head;
        for (int i = 1; i <= k - 2; i++)
        {
            tam = tam->next;
        }
        // tam : k - 1
        node *thuK = tam->next; // node thu k
        // cho k-1 => ket noi voi node thu k + 1
        tam->next = thuK->next;
        delete thuK; // free(thuK)
    }
}

void sapXep(node *&head)
{
    if (head == NULL || head->next == NULL)
        return;
    for (node *i = head; i->next != NULL; i = i->next)
    {
        for (node *j = i->next; j != NULL; j = j->next)
        {
            if (i->duLieu > j->duLieu)
            {
                swap(i->duLieu, j->duLieu);
            }
        }
    }
}

int timKiemThuK(node *head, int k)
{
    int n = kichThuoc(head);
    if (k < 1 || k > n)
    {
        cout << "Vi tri khong hop le.\n";
        return -1; // Return -1 to indicate invalid position
    }
    node *tam = head;
    for (int i = 1; i < k; i++)
    {
        tam = tam->next;
    }
    return tam->duLieu;
}

int main()
{
    node *head = NULL;
    while (1)
    {
        cout << "------------------------------------\n";
        cout << "1. Them vao dau\n";
        cout << "2. Them vao cuoi\n";
        cout << "3. Them vao giua\n";
        cout << "4. Xoa node khoi dau DSLK\n";
        cout << "5. Xoa node khoi cuoi DSLK\n";
        cout << "6. Xoa node o giua DSLK\n";
        cout << "7. Duyet\n";
        cout << "8. Tim kiem node thu k\n";
        cout << "9. Sap xep\n";
        cout << "0. Thoat !\n";
        cout << "------------------------------------\n";
        cout << "Nhap lua chon :";
        int lc;
        cin >> lc;
        if (lc == 1)
        {
            int x;
            cout << "Nhap x :";
            cin >> x;
            themDau(&head, x);
        }
        else if (lc == 2)
        {
            int x;
            cout << "Nhap x :";
            cin >> x;
            themCuoi(&head, x);
        }
        else if (lc == 3)
        {
            int x;
            cout << "Nhap x :";
            cin >> x;
            int k;
            cout << "Nhap k :";
            cin >> k;
            chen(&head, k, x);
        }
        else if (lc == 4)
        {
            xoaDau2(head);
        }
        else if (lc == 5)
        {
            xoaCuoi2(head);
        }
        else if (lc == 6)
        {
            int k;
            cout << "Nhap vi tri can xoa :";
            cin >> k;
            xoa(&head, k);
        }
        else if (lc == 7)
        {
            duyet(head);
        }
        else if (lc == 8)
        {
            int k;
            cout << "Nhap vi tri can tim :";
            cin >> k;
            int giaTri = timKiemThuK(head, k);
            if (giaTri != -1)
            {
                cout << "Gia tri tai vi tri " << k << " la: " << giaTri << endl;
            }
        }
        else if (lc == 9)
        {
            sapXep(head);
            cout << "Danh sach da duoc sap xep.\n";
        }
        else
        {
            break;
        }
    }
    return 0;
}