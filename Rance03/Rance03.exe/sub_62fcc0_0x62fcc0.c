// 函数: sub_62fcc0
// 地址: 0x62fcc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char var_4dc[0xd8]
int32_t eax_1 = __security_cookie ^ &var_4dc
void* i = arg2

while (i != 0)
    void* i_1 = 0x400
    
    if (i u< 0x400)
        i_1 = i
    
    i -= i_1
    
    if (arg1 != 0)
        int32_t eax_2 = *(arg1 + 0x5c)
        
        if (eax_2 == 0)
            sub_62a520(arg1, "Call to NULL read function")
            noreturn
        
        void var_404
        sub_627190(eax_2(arg1, &var_404, i_1), &var_404, arg1, i_1)

if (sub_62fdc0(arg1) != 0)
    int32_t eax_5 = *(arg1 + 0x78)
    int32_t eax_8
    
    if ((*(arg1 + 0x11c) & 0x20000000) == 0)
        eax_8 = eax_5 & 0x400
    else
        eax_8 = not.d(eax_5 u>> 9) & 1
    
    if (eax_8 != 0)
        sub_62a640(eax_8, &var_4dc, arg1, "CRC error")
        sub_62a550(arg1, &var_4dc)
        sub_69a5bc(eax_1 ^ &var_4dc)
        return 1
    
    sub_62a7c0(arg1, "CRC error")

sub_69a5bc(eax_1 ^ &var_4dc)
return 0
