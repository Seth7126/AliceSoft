// 函数: sub_51ff70
// 地址: 0x51ff70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

if (*(arg1 + 0x14) != 0)
    if (*(arg1 + 0x1c) != 0)
        goto label_51ffab
    
    char eax = sub_5200e0(arg1)
    
    if (eax != 0)
        *(arg1 + 0x1c) = 1
    label_51ffab:
        
        if (*(arg1 + 0x24) != 0 || *(arg1 + 0x2c) != 0)
            sub_41fff0(arg1 + 0x20)
            sub_418220(*(*(arg1 + 0x28) + 4))
            void* eax_2 = *(arg1 + 0x28)
            *(eax_2 + 4) = eax_2
            int32_t* eax_3 = *(arg1 + 0x28)
            *eax_3 = eax_3
            void* eax_4 = *(arg1 + 0x28)
            *(eax_4 + 8) = eax_4
            *(arg1 + 0x2c) = 0
            eax = sub_5203f0(arg1)
        
        if ((*(arg1 + 0x24) == 0 && *(arg1 + 0x2c) == 0) || eax != 0)
            return 1
else
    sub_64b530(0x6e313c)

return 0
