// 函数: sub_5c1dc0
// 地址: 0x5c1dc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = arg1
int32_t edi = *(ebp + 0x2c)
int32_t* var_8

for (int32_t* i = *(ebp + 0x28); i != edi; i = &i[2])
    if (*i != 0)
        int32_t* var_1c_1 = arg2
        int32_t* i_2 = i
        arg1 = sub_57e5d0(arg2, &var_8, arg1)

if (*(ebp + 0x34) != 0)
    int32_t* var_1c_2 = arg2
    void* var_20_1 = ebp + 0x34
    arg1 = sub_57e5d0(arg2, &var_8, arg1)

if (*(ebp + 0x3c) != 0)
    int32_t* var_1c_3 = arg2
    void* var_20_2 = ebp + 0x3c
    sub_57e5d0(arg2, &var_8, arg1)

int32_t* result = *(ebp + 0x48)

if (result != *(ebp + 0x4c))
    int32_t edi_1 = *(ebp + 0x4c)
    
    for (int32_t* i_1 = result; i_1 != edi_1; i_1 = &i_1[1])
        if (*i_1 != 0)
            result = sub_5c1dc0(arg2)

return result
