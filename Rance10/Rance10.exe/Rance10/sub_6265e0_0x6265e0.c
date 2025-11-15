// 函数: sub_6265e0
// 地址: 0x6265e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg1[1]

for (int32_t* i = *arg1; i != ebx; i = &i[0x1c])
    sub_6014c0(i)

arg1[1] = *arg1
char* result

if (arg3 s> 0)
    sub_6266f0(arg1, arg3)
    int32_t* i_1 = *arg1
    
    for (int32_t edi_1 = arg1[1]; i_1 != edi_1; i_1 = &i_1[0x1c])
        if (sub_6263c0(i_1, arg2).b == 0)
            result.b = 0
            return result

result.b = 1
return result
