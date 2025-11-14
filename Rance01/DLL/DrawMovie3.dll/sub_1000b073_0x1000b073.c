// 函数: sub_1000b073
// 地址: 0x1000b073
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t edi
int32_t var_10 = edi

if (arg1 s>= 0 && arg1 u< data_10023524)
    int32_t esi_3 = (arg1 & 0x1f) << 6
    int32_t* eax_4 = (&data_10023540)[arg1 s>> 5] + esi_3
    
    if ((eax_4[1].b & 1) != 0 && *eax_4 != 0xffffffff)
        if (data_10021a24 == 1)
            if (arg1 == 0)
                int32_t var_14_3 = 0
                SetStdHandle(STD_INPUT_HANDLE, nullptr)
            else if (arg1 == 1)
                int32_t var_14_2 = 0
                SetStdHandle(STD_OUTPUT_HANDLE, nullptr)
            else if (arg1 == 2)
                int32_t var_14_1 = 0
                SetStdHandle(STD_ERROR_HANDLE, nullptr)
        
        *(esi_3 + (&data_10023540)[arg1 s>> 5]) = 0xffffffff
        return 0

*__errno() = 9
*___doserrno() = 0
return 0xffffffff
