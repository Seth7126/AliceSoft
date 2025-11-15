// 函数: sub_435b30
// 地址: 0x435b30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[0x10f].b = 0

if (arg1[0x32] == arg1[0x33])
    int32_t* ecx_1 = arg1[0x10c]
    
    if (ecx_1 != 0)
        arg1[0x10e] = (**ecx_1)()
        sub_435f60(arg1, arg2)
        return sub_4061b0(&arg1[1], sub_435ba0, arg1)
else
    void** ecx = *(data_7fcb6c + 0x934)
    
    if (ecx != 0)
        int32_t var_8_1 = arg1[0x10b]
        
        if (sub_4883e0(ecx).b != 0)
            sub_435f60(arg1, arg2)
            return sub_4061b0(&arg1[1], sub_435ba0, arg1)

void* result
result.b = 0
return result
