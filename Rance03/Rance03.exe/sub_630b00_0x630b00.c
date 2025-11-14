// 函数: sub_630b00
// 地址: 0x630b00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_48
int32_t eax_1 = __security_cookie ^ &var_48
int32_t eax_2 = *(arg3 + 0x74)

if ((eax_2.b & 1) == 0)
    sub_62a740(arg3, "missing IHDR")
    noreturn

int32_t* eax_3

if ((eax_2.b & 6) != 0)
    sub_62fcc0(arg3, arg4)
    eax_3 = sub_62a7c0(arg3, "out of place")
else if (arg4 == 0x20)
    void var_24
    sub_62fc80(eax_2, &var_24, arg3, 0x20)
    int32_t ecx_1
    eax_3, ecx_1 = sub_62fcc0(arg3, nullptr)
    
    if (eax_3 == 0)
        uint32_t eax_4
        int32_t ecx_2
        eax_4, ecx_2 = sub_62fab0(ecx_1, &var_24)
        uint32_t var_2c_1 = eax_4
        void var_20
        uint32_t eax_5
        int32_t ecx_3
        eax_5, ecx_3 = sub_62fab0(ecx_2, &var_20)
        void var_1c
        uint32_t eax_6
        int32_t ecx_4
        eax_6, ecx_4 = sub_62fab0(ecx_3, &var_1c)
        uint32_t var_44 = eax_6
        void var_18
        uint32_t eax_7
        int32_t ecx_5
        eax_7, ecx_5 = sub_62fab0(ecx_4, &var_18)
        void var_14
        uint32_t eax_8
        int32_t ecx_6
        eax_8, ecx_6 = sub_62fab0(ecx_5, &var_14)
        void var_10
        uint32_t eax_9
        int32_t ecx_7
        eax_9, ecx_7 = sub_62fab0(ecx_6, &var_10)
        void var_c
        uint32_t eax_10
        int32_t ecx_8
        eax_10, ecx_8 = sub_62fab0(ecx_7, &var_c)
        uint32_t var_34_1 = eax_10
        void var_8
        uint32_t eax_11 = sub_62fab0(ecx_8, &var_8)
        uint32_t var_30_1 = eax_11
        
        if (eax_4 == 0xffffffff || eax_5 == 0xffffffff || var_44 == 0xffffffff
                || eax_7 == 0xffffffff || eax_8 == 0xffffffff || eax_9 == 0xffffffff
                || eax_10 == 0xffffffff || eax_11 == 0xffffffff)
            eax_3 = sub_62a7c0(arg3, "invalid values")
        else
            eax_3 = zx.d(*(arg3 + 0x326))
            
            if ((eax_3 & 0x8000) == 0)
                if ((eax_3.b & 0x10) == 0)
                    *(arg3 + 0x326) = eax_3.w | 0x10
                    sub_6285f0(&var_44, arg3 + 0x2dc, arg3, &var_44, 1)
                    int32_t eax_15 = sub_627f60(arg3, arg2)
                    sub_69a5bc(eax_1 ^ &var_48)
                    return eax_15
                
                *(arg3 + 0x326) = eax_3.w | 0x8000
                sub_627f60(arg3, arg2)
                eax_3 = sub_62a7c0(arg3, "duplicate")
else
    sub_62fcc0(arg3, arg4)
    eax_3 = sub_62a7c0(arg3, "invalid")

sub_69a5bc(eax_1 ^ &var_48)
return eax_3
