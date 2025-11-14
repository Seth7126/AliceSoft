// 函数: sub_62f890
// 地址: 0x62f890
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i_3 = *arg3
int32_t i_4 = i_3

if (*(arg3 + 9) != 8)
    return 

arg1.b = arg3[2].b
uint32_t eax_1

if (arg1.b == 2 && arg4 != 0)
    if (i_3 != 0)
        void* ebx_1 = arg2
        int32_t i
        
        do
            uint32_t esi_1 = zx.d(*arg2)
            arg2 = &arg2[3]
            ebx_1 += 1
            arg1.b = (((esi_1 & 0xf8) << 5 | (zx.d(arg2[0xfffffffe]) & 0xf8)) << 2
                | (zx.d(arg2[0xffffffff]) s>> 3 & 0x1f))[arg4]
            *(ebx_1 - 1) = arg1.b
            i = i_3
            i_3 -= 1
        while (i != 1)
        i_3 = i_4
    
    arg1.b = *(arg3 + 9)
    *(arg3 + 0xb) = arg1.b
    arg3[2].b = 3
    *(arg3 + 0xa) = 1
    eax_1 = zx.d(arg1.b)
    
    if (arg1.b u>= 8)
        arg3[1] = (eax_1 u>> 3) * i_3
        return 
    
    arg3[1] = (eax_1 * i_3 + 7) u>> 3
    return 

if (arg1.b == 6 && arg4 != 0)
    if (i_3 != 0)
        void* ebx_2 = arg2
        int32_t i_1
        
        do
            uint32_t esi_7 = zx.d(*arg2)
            arg2 = &arg2[4]
            ebx_2 += 1
            arg1.b = (((esi_7 & 0xf8) << 5 | (zx.d(arg2[0xfffffffd]) & 0xf8)) << 2
                | (zx.d(arg2[0xfffffffe]) s>> 3 & 0x1f))[arg4]
            *(ebx_2 - 1) = arg1.b
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        i_3 = i_4
    
    arg1.b = *(arg3 + 9)
    *(arg3 + 0xb) = arg1.b
    arg3[2].b = 3
    *(arg3 + 0xa) = 1
    eax_1 = zx.d(arg1.b)
    
    if (arg1.b u>= 8)
        arg3[1] = (eax_1 u>> 3) * i_3
        return 
    
    arg3[1] = (eax_1 * i_3 + 7) u>> 3
    return 

if (arg1.b != 3 || arg5 == 0 || i_3 == 0)
    return 

int32_t i_2

do
    arg1 = zx.d(*arg2)
    arg2 = &arg2[1]
    arg1.b = *(arg1 + arg5)
    arg2[0xffffffff] = arg1.b
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
