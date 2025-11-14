// 函数: sub_4e22e0
// 地址: 0x4e22e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = 0
int32_t var_8
int32_t* eax = &var_8
int32_t edx_1 = *(arg1 + 0xf8) - *(arg1 + 0xfc)
int32_t esi = *(arg1 + 0xf0)
var_8 = edx_1

if (edx_1 s<= 0)
    eax = &var_4

bool var_9 = *eax != 0
void* eax_1 = sub_4a3970(*(arg1 + 0x90))

if (esi != 0)
    int32_t eax_2
    int32_t ecx_1
    
    if (*(arg1 + 0x30) == 0)
        eax_2 = *(arg1 + 0xec)
        ecx_1 = *(arg1 + 0xf0)
    else
        eax_2 = *(arg1 + 0xf0)
        ecx_1 = *(arg1 + 0xec)
    
    if (*(eax_1 + 0x90) != ecx_1 || *(eax_1 + 0x94) != eax_2)
        *(eax_1 + 0x90) = ecx_1
        int32_t* ecx_2 = *(eax_1 + 0x200)
        *(eax_1 + 0x94) = eax_2
        
        if (ecx_2 != 0)
            (**ecx_2)()

void* eax_5 = *(arg1 + 0x90) + 0x6c

if (*(eax_5 + 0x412) != 0)
    *(eax_5 + 0x412) = 0
    *(eax_5 + 4) = 1

eax_5.b = var_9

if (*(eax_1 + 0x98) != eax_5.b)
    int32_t* ecx_3 = *(eax_1 + 0x200)
    *(eax_1 + 0x98) = eax_5.b
    
    if (ecx_3 != 0)
        (**ecx_3)()

sub_496150(eax_1 + 0x8c, arg1 + 0x124)
sub_496380(eax_1 + 0x8c, arg1 + 0x19c)

if (*(eax_1 + 0x1f0) != arg1 + 0x210)
    int32_t* ecx_6 = *(eax_1 + 0x200)
    *(eax_1 + 0x1f0) = arg1 + 0x210
    
    if (ecx_6 != 0)
        (**ecx_6)()

if (*(eax_1 + 0x1f4) != arg1 + 0x228)
    int32_t* ecx_7 = *(eax_1 + 0x200)
    *(eax_1 + 0x1f4) = arg1 + 0x228
    
    if (ecx_7 != 0)
        (**ecx_7)()

void* result = arg1 + 0x240

if (*(eax_1 + 0x1f8) != result)
    int32_t* ecx_8 = *(eax_1 + 0x200)
    *(eax_1 + 0x1f8) = result
    
    if (ecx_8 != 0)
        result = (**ecx_8)()

if (*(eax_1 + 0x1fc) != arg1 + 0x258)
    int32_t* ecx_9 = *(eax_1 + 0x200)
    *(eax_1 + 0x1fc) = arg1 + 0x258
    
    if (ecx_9 != 0)
        jump(**ecx_9)

return result
