// 函数: sub_58a4b0
// 地址: 0x58a4b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_10 = arg2
int32_t* var_14 = arg1
sub_4ac600(arg2[6], arg2[7])
arg2[7] = arg2[6]
int32_t result = *arg2
arg2[1] = result
int32_t edi = arg1[1]

for (void** i = *arg1; i != edi; i = &i[1])
    void* ecx_1 = *i
    
    if (ecx_1 != 0)
        result = sub_589830(ecx_1, arg2)

return result
