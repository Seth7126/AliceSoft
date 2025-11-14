// 函数: sub_1000b8d6
// 地址: 0x1000b8d6
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t edi
int32_t var_10 = edi
int32_t result = 0xffffffff

if (arg1 == 0)
    *__errno() = 0x16
    sub_100020e4(0, 0, 0, 0, 0)
    return 0xffffffff

if ((arg1[3].b & 0x83) != 0)
    result = sub_1000b4fa(arg1)
    sub_1000bdba(arg1)
    
    if (sub_1000bced(sub_10009f7a(arg1)) s>= 0)
        void* eax_6 = arg1[7]
        
        if (eax_6 != 0)
            sub_10003602(eax_6)
            arg1[7] = 0
    else
        result = 0xffffffff

arg1[3] = 0
return result
