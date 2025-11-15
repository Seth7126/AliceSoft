// 函数: sub_606f30
// 地址: 0x606f30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == arg2)
    return arg4

int32_t* edi = arg4
int32_t* ecx = arg3 + 0xc
int32_t* esi = &edi[3]

do
    if (edi != 0)
        *edi = ecx[-3]
        esi[-2] = 0
        esi[-1] = 0
        *esi = 0
        esi[-2] = ecx[-2]
        esi[-1] = ecx[-1]
        *esi = *ecx
        ecx[-2] = 0
        ecx[-1] = 0
        *ecx = 0
    
    ecx = &ecx[4]
    edi = &edi[4]
    esi = &esi[4]
while (&ecx[-3] != arg2)

return edi
