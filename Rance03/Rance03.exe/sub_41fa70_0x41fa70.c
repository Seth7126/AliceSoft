// 函数: sub_41fa70
// 地址: 0x41fa70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i = 0

if (((arg1[0xa] - arg1[9]) & 0xfffffffc) s> 0)
    do
        int32_t eax_6
        
        if (i s< 0 || i s>= (arg1[0xa] - arg1[9]) s>> 2)
            eax_6 = 0
        else
            eax_6 = *(arg1[9] + (i << 2))
        
        sub_41fa70(eax_6)
        i += 1
    while (i s< (arg1[0xa] - arg1[9]) s>> 2)

int32_t lParam = arg1[1]
int32_t (__stdcall* var_8)(int32_t* arg1, int32_t* arg2) = sub_41fb60
int32_t ecx
int32_t var_4 = ecx
return SendMessageA(*arg1, 0x1115, 0, &lParam)
