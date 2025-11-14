// 函数: sub_5c4010
// 地址: 0x5c4010
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

arg1[0x8d] -= 4
int32_t ebx = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t edi = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t* ecx = *arg1[0x8d]
int32_t eax_5 = (arg1[0x5e] - arg1[0x5d]) s>> 2

if (ecx u< eax_5)
    eax_5 = arg1[0x5d]
    ecx = *(eax_5 + (ecx << 2))
    
    if (ecx != 0)
        uint32_t eax_7 = ecx[3] u>> 2
        
        if (edi u>= eax_7)
            return sub_5c24e0(eax_7, arg1, ecx, arg1, 0x6e6d90)
        
        int32_t eax_8
        
        if (ecx[3] != 0)
            eax_8 = ecx[2]
        else
            eax_8 = 0
        
        int32_t eax_10 = *(eax_8 + (edi << 2)) | ebx
        
        if (ecx[3] != 0)
            *(ecx[2] + (edi << 2)) = eax_10
            return sub_5ddf10(&arg1[0x88], eax_10)
        
        *(edi << 2) = eax_10
        return sub_5ddf10(&arg1[0x88], eax_10)

return sub_5c24e0(eax_5, arg1, ecx, arg1, 0x6e6db0)
