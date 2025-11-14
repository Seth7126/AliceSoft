// 函数: sub_61ca00
// 地址: 0x61ca00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 u> 9)
    int32_t eax_32
    eax_32.b = 0
    return eax_32

switch (arg1)
    case 0
        *arg3 = zx.d(sub_61b640((***arg2)()) != 0)
        uint32_t* eax_4
        eax_4.b = 1
        return eax_4
    case 1
        *arg3 = zx.d(sub_61cbc0(*arg2, arg2[1]))
        uint32_t* eax_6
        eax_6.b = 1
        return eax_6
    case 2
        *arg3 = zx.d(sub_61cc90())
        uint32_t* eax_8
        eax_8.b = 1
        return eax_8
    case 3
        sub_61b910(data_75d52c)
        BOOL eax_9
        eax_9.b = 1
        return eax_9
    case 4
        *arg3 = sub_61ccc0()
        uint32_t eax_10
        eax_10.b = 1
        return eax_10
    case 5
        *arg3 = zx.d(sub_61c230(*arg2))
        uint32_t* eax_13
        eax_13.b = 1
        return eax_13
    case 6
        int32_t* esi = *arg2
        char* eax_16 = (**esi)()
        char i
        
        do
            i = *eax_16
            eax_16 = &eax_16[1]
        while (i != 0)
        
        if (eax_16 != &eax_16[1])
            *arg3 = zx.d(sub_61c350(esi))
            uint32_t* eax_20
            eax_20.b = 1
            return eax_20
        
    label_61cac5:
        *arg3 = 1
        uint32_t* eax_18
        eax_18.b = 1
        return eax_18
    case 7
        int32_t* esi_1 = *arg2
        char* eax_23
        char ecx_13
        eax_23, ecx_13 = (**esi_1)()
        char i_1
        
        do
            i_1 = *eax_23
            eax_23 = &eax_23[1]
        while (i_1 != 0)
        
        if (eax_23 == &eax_23[1])
            goto label_61cac5
        
        *arg3 = zx.d(sub_61c480(esi_1))
        uint32_t* eax_25
        eax_25.b = 1
        return eax_25
    case 8
        *arg3 = zx.d(sub_61c5a0(*arg2))
        uint32_t* eax_28
        eax_28.b = 1
        return eax_28
    case 9
        *arg3 = zx.d(sub_61c7b0(*arg2))
        uint32_t* eax_31
        eax_31.b = 1
        return eax_31
