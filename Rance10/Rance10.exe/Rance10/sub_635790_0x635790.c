// 函数: sub_635790
// 地址: 0x635790
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* eax = *arg1

if (eax != arg1[2])
    int16_t eax_1 = *eax
    arg1[0x12].w = eax_1
    uint32_t eax_3
    
    if (_strchr("()$^.*+?[]|\-{},:=!\n\r", eax_1.b) == 0)
        eax_3 = 0
    else
        eax_3 = zx.d(arg1[0x12].w)
    
    arg1[0x13] = eax_3
else
    arg1[0x13] = 0xffffffff
    arg1[0x12].w = 0xffff

uint32_t eax_5 = zx.d(arg1[0x12].w) - 0xa

if (eax_5 u<= 0x73)
    eax_5 = zx.d(lookup_table_6358c4[eax_5])
    bool cond:0_1
    
    switch (eax_5)
        case 0
            if ((arg1[0x14].b & 4) != 0 && arg1[4] == 0)
                arg1[0x13] = 0x7c
        case 1
            if ((arg1[0x14] & 0x2000000) != 0)
                eax_5 = *arg1 + 2
                
                if (eax_5 != arg1[2] && *eax_5 != 0xa)
                    arg1[0x13] = 0
        case 2
            cond:0_1 = (arg1[0x14].b & 8) != 0
        label_635890:
            
            if (not(cond:0_1))
                arg1[0x13] = 0
        case 3
            if ((arg1[0x14] & 0x4000000) != 0)
                eax_5 = sub_636d50(&arg1[9])
                
                if (eax_5.b != 0)
                    arg1[0x13] = 0
        case 4
            cond:0_1 = (arg1[0x14].b & 1) != 0
            goto label_635890
        case 5
            eax_5 = sub_636a80(arg1)
            
            if (eax_5.b != 0)
                uint32_t eax_7 = zx.d(*(*arg1 + 2))
                arg1[0x12].w = eax_7.w
                arg1[0x13] = eax_7
                return eax_7
        case 6
            if ((arg1[0x14] & 0x2000000) != 0)
                eax_5 = sub_636d50(&arg1[9])
                cond:0_1 = eax_5.b != 0
                goto label_635890
        case 7
            cond:0_1 = (arg1[0x14].b & 0x10) != 0
            goto label_635890
        case 8
            cond:0_1 = (arg1[0x14].b & 2) != 0
            goto label_635890

return eax_5
