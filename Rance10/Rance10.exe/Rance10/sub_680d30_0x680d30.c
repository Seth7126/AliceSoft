// 函数: sub_680d30
// 地址: 0x680d30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == arg2)
    return 

int32_t* edi_1 = arg1 + 0x14
int32_t* esi_1 = arg2 + 0x14

do
    esi_1 = &esi_1[-6]
    
    if (&edi_1[-5] == &esi_1[-5])
        break
    
    sub_46e0d0(&edi_1[-5], &esi_1[-5])
    int32_t ecx_1 = edi_1[-1]
    edi_1[-1] = esi_1[-1]
    esi_1[-1] = ecx_1
    int32_t ecx_2 = *edi_1
    *edi_1 = *esi_1
    edi_1 = &edi_1[6]
    *esi_1 = ecx_2
while (&edi_1[-5] != &esi_1[-5])
