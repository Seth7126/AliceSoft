// 函数: sub_650e30
// 地址: 0x650e30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = 0
int32_t i = 0
int32_t* ebx

if (arg1[0x13] s> 0)
    ebx = &arg1[0x15][4]
    
    do
        i += 1
        ebp += sub_64fe10(arg1, *ebx)
        ebx = &ebx[0x16]
    while (i s< arg1[0x13])

if (*(arg1 + 0xd1) != 0 || arg1[0x3f].b != 0 || arg1[0x12] != 8 || arg1[0x5b] != 8)
    ebx.b = 0
else
    int32_t i_2 = arg1[0x13]
    ebx.b = 1
    
    if (i_2 s> 0)
        void* eax_3 = arg1[0x15] + 0x18
        int32_t i_1
        
        do
            if (*(eax_3 - 4) s> 1 || *eax_3 s> 1)
                ebx.b = 0
            
            eax_3 += 0x58
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (ebp != 0 && ebx.b != 0)
        ebx.b = 0
        *(*arg1 + 0x14) = 0x4d
        (*(*arg1 + 4))(arg1, 0)

int32_t* ecx_2

if (*(arg1 + 0xd1) == 0)
    arg1[0x3f]
    ecx_2 = arg1
else
    ecx_2 = arg1
    arg1[0x3f]

char* result = sub_650580(ecx_2)

if (arg1[0x3d] != 0)
    result = sub_650360(arg1)

if (arg1[0x3f].b != 0 && arg1[0x5b] != 8)
    return sub_6508c0(arg1) __tailcall

return result
