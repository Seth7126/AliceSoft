// 函数: sub_5d4150
// 地址: 0x5d4150
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* esi

if (*(arg1 + 0xc) != 0)
    esi = *(arg1 + 8)
else
    esi = nullptr

int32_t ecx = 0
char eax

if (arg3 != 0)
    do
        eax = *esi
        
        if (eax == 0)
            return 1
        
        if ((eax u< 0x81 || eax u> 0x9f) && (eax u< 0xe0 || eax u> 0xef))
            esi = &esi[1]
        else
            esi = &esi[2]
        
        ecx += 1
    while (ecx u< arg3)

eax = *esi

if (eax == 0)
    return 1

if ((eax u>= 0x81 && eax u<= 0x9f) || (eax u>= 0xe0 && eax u<= 0xef))
    *esi = arg2.b
    
    if (arg2.w u<= 0xff)
        int32_t* ecx_1 = &esi[2]
        void* edi = ecx_1 + 1
        int32_t eax_1
        
        do
            eax_1.b = *ecx_1
            ecx_1 += 1
        while (eax_1.b != 0)
        _memcpy(&esi[1], &esi[2], ecx_1 - edi + 1)
        int32_t* eax_5
        eax_5.b = 1
        return eax_5
    
    esi[1] = (arg2 u>> 8).b
    return 1

if (arg2.w u<= 0xff)
    *esi = arg2.b
    int32_t eax_6
    eax_6.b = 1
    return 1

int32_t eax_7

if (*(arg1 + 0xc) != 0)
    eax_7 = *(arg1 + 8)
else
    eax_7 = 0

char eax_10 = sub_64aeb0(arg1 + 4, *(arg1 + 0xc) + 1)

if (eax_10 == 0)
    return eax_10

int32_t eax_11

if (*(arg1 + 0xc) != 0)
    eax_11 = *(arg1 + 8)
else
    eax_11 = 0

void* esi_2 = esi - eax_7 + eax_11
int32_t* ecx_4 = esi_2 + 1
void* edx_2 = ecx_4 + 1

do
    eax_11.b = *ecx_4
    ecx_4 += 1
while (eax_11.b != 0)

_memcpy(esi_2 + 2, esi_2 + 1, ecx_4 - edx_2 + 1)
*esi_2 = arg2.b
int32_t* eax_14
eax_14.b = 1
*(esi_2 + 1) = (arg2 u>> 8).b
return eax_14
