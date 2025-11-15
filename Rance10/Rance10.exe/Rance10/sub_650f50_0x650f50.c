// 函数: sub_650f50
// 地址: 0x650f50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg1[0x62]

if (*(arg1 + 0xd1) == 0)
    int32_t i = 0
    
    if (arg1[0x45] s> 0)
        void* ebx_1 = &arg1[0x46]
        
        do
            void* ebp_1 = *ebx_1
            char* eax
            
            if (arg1[0x57] == 0 && arg1[0x59] == 0)
                eax = sub_64ffa0(eax, *(ebp_1 + 0x14), arg1, 0)
            
            if (arg1[0x58] != 0)
                eax = sub_64ffa0(eax, *(ebp_1 + 0x18), arg1, 1)
            
            i += 1
            ebx_1 += 4
        while (i s< arg1[0x45])
else
    sub_6500f0(arg1)

if (arg1[0x38] != ebx[7])
    sub_64fd30(arg1, 0xdd)
    sub_64fda0(arg1, 4)
    sub_64fda0(arg1, arg1[0x38])
    ebx[7] = arg1[0x38]

return sub_650700(arg1) __tailcall
