// 函数: sub_636c90
// 地址: 0x636c90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* i_5
void* i_4 = i_5
void* ebp = arg2
int32_t* esi = arg1
char* edx = *esi
char* ecx = &edx[1]
void* eax

if (ebp s> 1)
    void* i_3 = ebp - 1
    void* i
    
    do
        eax.b = *edx
        edx = &edx[1]
        eax.b -= *ecx
        ecx = &ecx[1]
        ecx[0xffffffff] = eax.b
        i = i_3
        i_3 -= 1
    while (i != 1)
    esi = arg1

if (arg3 s<= 1)
    return 

void* edx_1 = nullptr
eax = ebp
void* i_2 = arg3 - 1
arg2 = eax
arg3 = nullptr
i_4 = i_2
void* i_1

do
    int32_t ecx_1 = *esi
    char* eax_1 = eax + ecx_1
    char* esi_1 = edx_1 + ecx_1
    ecx_1.b = *esi_1
    void* esi_2 = &esi_1[1]
    ecx_1.b -= *eax_1
    *eax_1 = ecx_1.b
    void* eax_2 = &eax_1[1]
    void* edi_1 = eax_2 - 1
    
    if (ebp s> 1)
        void* j_1 = ebp - 1
        void* j
        
        do
            uint32_t edx_2 = zx.d(*edi_1)
            esi_2 += 1
            edi_1 += 1
            eax_2 += 1
            *(eax_2 - 1) = ((edx_2 + zx.d(*(esi_2 - 1))) s>> 1).b - *(eax_2 - 1)
            j = j_1
            j_1 -= 1
        while (j != 1)
        edx_1 = arg3
        i_2 = i_4
    
    edx_1 += ebp
    esi = arg1
    eax = arg2 + ebp
    i_1 = i_2
    i_2 -= 1
    arg2 = eax
    arg3 = edx_1
    i_4 = i_2
while (i_1 != 1)
