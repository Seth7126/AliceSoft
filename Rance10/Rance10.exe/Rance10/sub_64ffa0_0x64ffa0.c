// 函数: sub_64ffa0
// 地址: 0x64ffa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg3
int32_t var_4 = arg2
void* ebp

if (arg4 == 0)
    ebp = arg3[arg2 + 0x1e]
else
    ebp = arg3[arg2 + 0x22]
    arg2 += 0x10
    var_4 = arg2

if (ebp == 0)
    *(*arg3 + 0x14) = 0x34
    *(*arg3 + 0x18) = arg2
    (**arg3)(arg3)

if (*(ebp + 0x111) != 0)
    return 

sub_64fd30(arg3, 0xc4)
int32_t ebx_1 = 0
void* ecx_1 = ebp + 2
int32_t edx = 0
int32_t i_2 = 8
int32_t i

do
    uint32_t eax_4 = zx.d(*(ecx_1 - 1))
    ecx_1 += 2
    ebx_1 += eax_4
    edx += zx.d(*(ecx_1 - 2))
    i = i_2
    i_2 -= 1
while (i != 1)
int32_t ebx_2 = ebx_1 + edx
sub_64fda0(arg3, ebx_2 + 0x13)
int32_t* edx_2 = arg3[6]
**edx_2 = var_4.b
*edx_2 += 1
int32_t temp1_1 = edx_2[1]
edx_2[1] -= 1

if (temp1_1 == 1 && edx_2[3](arg3).b == 0)
    *(*arg3 + 0x14) = 0x19
    (**arg3)(arg3)

for (char* i_1 = 1; i_1 s<= 0x10; i_1 = &i_1[1])
    int32_t* edx_3 = arg3[6]
    arg1.b = *(i_1 + ebp)
    **edx_3 = arg1.b
    *edx_3 += 1
    int32_t temp2_1 = edx_3[1]
    edx_3[1] -= 1
    
    if (temp2_1 == 1 && edx_3[3](arg3).b == 0)
        *(*arg3 + 0x14) = 0x19
        (**arg3)(arg3)

int32_t edi_1 = 0

if (ebx_2 s> 0)
    do
        char** edx_4 = arg3[6]
        arg1.b = *(edi_1 + ebp + 0x11)
        **edx_4 = arg1.b
        *edx_4 = &(*edx_4)[1]
        int32_t temp3_1 = edx_4[1]
        edx_4[1] = &edx_4[1][0xffffffff]
        
        if (temp3_1 == 1 && edx_4[3](arg3).b == 0)
            *(*arg3 + 0x14) = 0x19
            (**arg3)(arg3)
        
        edi_1 += 1
    while (edi_1 s< ebx_2)

*(ebp + 0x111) = 1
