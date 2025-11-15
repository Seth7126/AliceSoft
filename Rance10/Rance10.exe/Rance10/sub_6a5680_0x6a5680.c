// 函数: sub_6a5680
// 地址: 0x6a5680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t eax = arg1 u>> 0x18

if (eax == 0x20 || (eax u>= 0x30 && eax u<= 0x39) || (eax u>= 0x41 && eax u<= 0x5a))
label_6a56ad:
    uint32_t eax_3 = zx.d((arg1 u>> 0x10).b)
    
    if (eax_3 == 0x20 || (eax_3 u>= 0x30 && eax_3 u<= 0x39) || (eax_3 u>= 0x41 && eax_3 u<= 0x5a))
    label_6a56d8:
        uint32_t eax_6 = zx.d((arg1 u>> 8).b)
        
        if (eax_6 == 0x20 || (eax_6 u>= 0x30 && eax_6 u<= 0x39)
            || (eax_6 u>= 0x41 && eax_6 u<= 0x5a))
        label_6a5701:
            
            if (sub_6a5650(zx.d(arg1.b)) != 0)
                return 1
        else if (eax_6 u>= 0x61 && eax_6 u<= 0x7a)
            goto label_6a5701
    else if (eax_3 u>= 0x61 && eax_3 u<= 0x7a)
        goto label_6a56d8
else if (eax u>= 0x61 && eax u<= 0x7a)
    goto label_6a56ad

return 0
