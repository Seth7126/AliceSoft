// 函数: sub_5b3ef0
// 地址: 0x5b3ef0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
void* ebx = arg1
int32_t edi = *(ebx + 0xc)

for (int32_t* i = *(ebx + 8); i != edi; i = &i[0xe])
    arg1 = (**i)(0)

void* var_14 = var_4
*(ebx + 0xc) = *(ebx + 8)
void* var_18 = arg1
sub_5b4ce0(*(ebx + 0x14), *(ebx + 0x18))
int32_t result = *(ebx + 0x14)
*(ebx + 0x18) = result
return result
