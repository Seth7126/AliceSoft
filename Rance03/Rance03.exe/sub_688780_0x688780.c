// 函数: sub_688780
// 地址: 0x688780
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1

if (*(arg1 + 0xd0) == 0)
    return 

void* ecx = *(arg1 + 0xc8)

if (ecx == 0 || *(arg1 + 0xcc) == 0)
    return 

if (sub_68c050(ecx) != 0)
    void* eax_2 = *(arg1 + 0xc8)
    
    if (sub_688ef0(*(arg1 + 0xcc), eax_2 + 0x208, *(eax_2 + 0x37c)) != 0
            && sub_694f60(*(arg1 + 0xd0)) != 0)
        InvalidateRect(*(arg1 + 8), nullptr, 0)
        UpdateWindow(*(arg1 + 8))
        return 

sub_696150(arg1)
