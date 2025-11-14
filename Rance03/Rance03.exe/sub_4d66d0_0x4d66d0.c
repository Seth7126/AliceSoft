// 函数: sub_4d66d0
// 地址: 0x4d66d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t* edi = arg1
int32_t ebx = edi[0x12]

for (void* i = edi[0x11]; i != ebx; i += 0x5c)
    arg1 = sub_4b7cf0(i + 8)

edi[0x12] = edi[0x11]
int32_t ebx_1 = edi[0x19]

for (void* i_1 = edi[0x18]; i_1 != ebx_1; i_1 += 0x5c)
    arg1 = sub_4b7cf0(i_1 + 8)

edi[0x19] = edi[0x18]
void* eax_2 = data_75d4cc
*(eax_2 + 0x294) = 0
*(eax_2 + 0x298) = 0

for (int32_t* i_2 = edi[0x2c]; i_2 != edi[0x2d]; i_2 = &i_2[1])
    arg1 = *i_2
    
    if (arg1 != 0)
        arg1 = (**arg1)(1)

int32_t* var_14 = var_4
edi[0x2d] = edi[0x2c]
int32_t* var_18 = arg1
sub_4d98b0(edi[0x25], edi[0x26])
int32_t result = edi[0x25]
edi[0x26] = result
return result
