// 函数: sub_5b3f40
// 地址: 0x5b3f40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
void* ebp = arg1
void* var_4 = ebp

for (void* i = *(ebp + 8); i != *(ebp + 0xc); i += 0x38)
    *(i + 0x20) = 0
    *(i + 0x30) = 0
    *(i + 0x34) = 0
    int32_t ebx_1 = *(i + 0x28)
    
    for (int32_t* j = *(i + 0x24); j != ebx_1; j = &j[4])
        (**j)(0)
    
    *(i + 0x28) = *(i + 0x24)

for (int32_t* i_1 = *(ebp + 0x14); i_1 != *(ebp + 0x18); i_1 = &i_1[3])
    void* j_1 = *i_1
    
    if (j_1 != i_1[1])
        do
            *(j_1 + 0x20) = 0
            *(j_1 + 0x30) = 0
            *(j_1 + 0x34) = 0
            int32_t ebp_1 = *(j_1 + 0x28)
            
            for (int32_t* k = *(j_1 + 0x24); k != ebp_1; k = &k[4])
                (**k)(0)
            
            *(j_1 + 0x28) = *(j_1 + 0x24)
            j_1 += 0x38
        while (j_1 != i_1[1])
        
        ebp = var_4
