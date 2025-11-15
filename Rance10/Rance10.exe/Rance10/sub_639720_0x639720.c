// 函数: sub_639720
// 地址: 0x639720
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx_4 = *(arg1 + 0x50)
uint32_t eax = zx.d(*(arg1 + 0x48))
uint32_t result

if ((edx_4 & &__dos_header) == 0)
    if (eax - 0x22 u> 0x5b)
        result.b = 0
        return result
    
    switch (&lookup_table_63977c[0x22 + eax])
        case &lookup_table_6397c0, &lookup_table_6397c0[0xd]
            result.b = (edx_4 u>> 0x18).b & 1
            return result
        case &lookup_table_6397c0[1], &lookup_table_6397c0[3], &lookup_table_6397c0[4], 
                &lookup_table_6397c0[5], &lookup_table_6397c0[0xa], &lookup_table_6397c0[0xb], 
                &lookup_table_6397c0[0xe], &lookup_table_6397c0[0xf], &lookup_table_6397c0[0x10], 
                &lookup_table_6397c0[0x11], &lookup_table_6397c0[0x12], &lookup_table_6397c0[0x13], 
                &lookup_table_6397c0[0x14], &lookup_table_6397c0[0x15], &lookup_table_6397c0[0x16], 
                &lookup_table_6397c0[0x17], &lookup_table_6397c0[0x18], &lookup_table_6397c0[0x19], 
                &lookup_table_6397c0[0x1a], &lookup_table_6397c0[0x1b], &lookup_table_6397c0[0x1c], 
                &lookup_table_6397c0[0x1e], &lookup_table_6397c0[0x1f], &lookup_table_6397c0[0x20], 
                &lookup_table_6397c0[0x21], &lookup_table_6397c0[0x22], &lookup_table_6397c0[0x23], 
                &lookup_table_6397c0[0x24], &lookup_table_6397c0[0x25], &lookup_table_6397c0[0x26], 
                &lookup_table_6397c0[0x27], &lookup_table_6397c0[0x28], &lookup_table_6397c0[0x29], 
                &lookup_table_6397c0[0x2a], &lookup_table_6397c0[0x2b], &lookup_table_6397c0[0x2c], 
                &lookup_table_6397c0[0x2d], &lookup_table_6397c0[0x2e], &lookup_table_6397c0[0x2f], 
                &lookup_table_6397c0[0x30], &lookup_table_6397c0[0x31], &lookup_table_6397c0[0x32], 
                &lookup_table_6397c0[0x33], &lookup_table_6397c0[0x34], &lookup_table_6397c0[0x35], 
                &lookup_table_6397c0[0x36], &lookup_table_6397c0[0x37], &lookup_table_6397c0[0x38], 
                &lookup_table_6397c0[0x3b], &lookup_table_6397c0[0x3d], &lookup_table_6397c0[0x3e], 
                &lookup_table_6397c0[0x3f], &lookup_table_6397c0[0x40], &lookup_table_6397c0[0x41], 
                &lookup_table_6397c0[0x42], &lookup_table_6397c0[0x43], &lookup_table_6397c0[0x44], 
                &lookup_table_6397c0[0x45], &lookup_table_6397c0[0x46], &lookup_table_6397c0[0x47], 
                &lookup_table_6397c0[0x48], &lookup_table_6397c0[0x49], &lookup_table_6397c0[0x4a], 
                &lookup_table_6397c0[0x4b], &lookup_table_6397c0[0x4c], &lookup_table_6397c0[0x4d], 
                &lookup_table_6397c0[0x4e], &lookup_table_6397c0[0x4f], &lookup_table_6397c0[0x50], 
                &lookup_table_6397c0[0x51], &lookup_table_6397c0[0x52], &lookup_table_6397c0[0x53], 
                &lookup_table_6397c0[0x54], &lookup_table_6397c0[0x55], &lookup_table_6397c0[0x56], 
                &lookup_table_6397c0[0x57], &lookup_table_6397c0[0x58]
            result.b = 0
            return result
        case &lookup_table_6397c0[2], &lookup_table_6397c0[8], &lookup_table_6397c0[0xc], 
                &lookup_table_6397c0[0x39], &lookup_table_6397c0[0x3a], &lookup_table_6397c0[0x3c], 
                &lookup_table_6397c0[0x5a]
            result.b = 1
            return result
        case &lookup_table_6397c0[6], &lookup_table_6397c0[7], &lookup_table_6397c0[9], 
                &lookup_table_6397c0[0x1d], &lookup_table_6397c0[0x59], &lookup_table_6397c0[0x5b]
            result.b = (edx_4 u>> 0x17).b & 1
            return result
else
    if (eax - 0x44 u> 0x33)
        result.b = 1
        return result
    
    switch (eax)
        case 0x44, 0x53, 0x57, 0x63, 0x64, 0x73, 0x77
            result.b = 0
            return result
        case 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 
                0x54, 0x55, 0x56, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 
                0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 
                0x74, 0x75, 0x76
            result.b = 1
            return result
