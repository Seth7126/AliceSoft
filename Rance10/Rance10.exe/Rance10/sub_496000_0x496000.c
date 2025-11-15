// 函数: sub_496000
// 地址: 0x496000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (sub_41ac20(arg1, 0x7606ec) == 0 && sub_41ac20(arg1, 0x7606fc) == 0)
    if (sub_41ac20(arg1, 0x76073c) != 0)
        if (sub_41ac20(arg1, 0x75fc0c) != 0)
            return data_7fcb5c
        
        return 0
    
    if (sub_41ac20(arg1, 0x7606ac) == 0)
        if (sub_41ac20(arg1, 0x76071c) != 0)
            return sub_537460()
        
        if (sub_41ac20(arg1, 0x76070c) != 0)
            if (sub_41ac20(arg1, 0x761534) != 0)
                return data_7fcb8c
            
            return 0
        
        if (sub_41ac20(arg1, 0x76069c) != 0)
            return sub_6cc630(arg1)
        
        if (sub_41ac20(arg1, 0x7606bc) != 0)
            return sub_6cc630(arg1)
        
        if (sub_41ac20(arg1, 0x7606cc) != 0)
            return sub_6cc630(arg1)
        
        if (sub_41ac20(arg1, 0x7606dc) != 0)
            return sub_6cc630(arg1)
        
        if (sub_41ac20(arg1, "-6eC") != 0)
            return sub_6cc630(arg1)
    else
        int32_t* ecx_5 = data_7fcbd4
        
        if (ecx_5 != 0)
            (**ecx_5)()
            return data_7fcbd4
    
    return 0

int32_t* edi = data_7fcb58

if (edi != 0)
    char eax_20 = sub_41ac20(arg1, 0x75e0dc)
    char eax_23
    
    if (eax_20 == 0)
        eax_23 = sub_41ac20(arg1, 0x75e0ec)
    
    if (eax_20 != 0 || eax_23 != 0)
        (**edi)()
        return data_7fcb58

return 0
