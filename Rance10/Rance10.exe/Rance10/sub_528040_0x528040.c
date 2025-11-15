// 函数: sub_528040
// 地址: 0x528040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = 0
int32_t* ecx = data_7fcb88
char* var_8 = arg1

if (ecx != 0)
    int32_t* eax_3 = (**ecx)(0x766e68)
    
    if (eax_3 != 0)
        sub_403360(arg1, (*(*eax_3 + 0x18))())
        return arg1

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
return arg1
