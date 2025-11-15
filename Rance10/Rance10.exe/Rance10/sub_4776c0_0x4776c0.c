// 函数: sub_4776c0
// 地址: 0x4776c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = arg3

if (arg3 s>= 0)
    int32_t edx = data_7fcc74
    
    if (arg3 u< (data_7fcc78 - edx) s>> 2)
        void* edi_1 = *(edx + (arg3 << 2))
        
        if (edi_1 != 0 && arg2[4] != 0)
            int32_t var_10_1 = 1
            var_4.b = 0x2e
            arg1 = sub_42cb30(arg2, &var_4, arg3)
            
            if (arg1 == 0xffffffff)
                sub_46e950(edi_1 + 8, arg2, arg1)[0xe].b = arg4
                struct exfile::CDefineData::VTable** eax_2
                eax_2.b = 1
                return eax_2

arg1.b = 0
return arg1
