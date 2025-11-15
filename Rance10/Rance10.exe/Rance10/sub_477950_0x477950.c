// 函数: sub_477950
// 地址: 0x477950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 s>= 0)
    int32_t esi_1 = data_7fcc74
    
    if (arg3 u< (data_7fcc78 - esi_1) s>> 2)
        void* ecx = *(esi_1 + (arg3 << 2))
        
        if (ecx != 0)
            arg1 = sub_46aa00(ecx, arg2)
            
            if (arg1 != 0)
                *(arg1 + 0x34) = 4
                arg1 = sub_46b3a0(arg1 + 0x60, arg4)
                
                if (arg1 != 0)
                    *(arg1 + 8) = 2
                    *(arg1 + 5) = 0
                    arg1.b = 1
                    return arg1

arg1.b = 0
return arg1
