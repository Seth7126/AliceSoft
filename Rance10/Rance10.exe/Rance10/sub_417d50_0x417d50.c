// 函数: sub_417d50
// 地址: 0x417d50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == arg2)
    return 

int32_t* esi_1 = arg1 + 0x14

do
    int32_t eax_1 = *esi_1
    
    if (eax_1 u>= 0x10)
        sub_403160(esi_1[-5], eax_1 + 1, 1)
    
    *esi_1 = 0xf
    bool cond:0_1 = *esi_1 u< 0x10
    esi_1[-1] = 0
    void* eax_3
    
    if (cond:0_1)
        eax_3 = &esi_1[-5]
    else
        eax_3 = esi_1[-5]
    
    esi_1 = &esi_1[6]
    *eax_3 = 0
while (&esi_1[-5] != arg2)
