// 函数: sub_45d190
// 地址: 0x45d190
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* edi = *arg3
int32_t* var_4 = arg3
char* esi = &edi[1]

if (arg2 s> 1)
    void* i_2 = arg2 - 1
    void* i
    
    do
        arg1.b = *edi
        edi = &edi[1]
        arg1.b -= *esi
        esi = &esi[1]
        esi[0xffffffff] = arg1.b
        i = i_2
        i_2 -= 1
    while (i != 1)

if (arg4 s<= 1)
    return 

void* edx = nullptr
arg1 = arg2
void* i_3 = arg4 - 1
arg4 = arg1
void* var_c_1 = nullptr
void* i_4 = i_3
void* i_1

do
    int32_t ecx = *arg3
    char* eax = arg1 + ecx
    char* edi_1 = eax
    char* esi_1 = edx + ecx
    ecx.b = *esi_1
    void* esi_2 = &esi_1[1]
    ecx.b -= *eax
    *eax = ecx.b
    void* eax_1 = &eax[1]
    
    if (arg2 s> 1)
        void* j_1 = arg2 - 1
        void* j
        
        do
            uint32_t edx_1 = zx.d(*edi_1)
            esi_2 += 1
            edi_1 = &edi_1[1]
            eax_1 += 1
            *(eax_1 - 1) = ((edx_1 + zx.d(*(esi_2 - 1))) u>> 1).b - *(eax_1 - 1)
            j = j_1
            j_1 -= 1
        while (j != 1)
        edx = var_c_1
        i_3 = i_4
    
    edx += arg2
    arg3 = var_4
    arg1 = arg4 + arg2
    i_1 = i_3
    i_3 -= 1
    arg4 = arg1
    var_c_1 = edx
    i_4 = i_3
while (i_1 != 1)
