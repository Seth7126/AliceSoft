// 函数: sub_656310
// 地址: 0x656310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = arg1[0xc]
int32_t edx = arg1[0xe]
int32_t ebx = *(arg2 + 0x34)
int32_t temp1 = *(arg2 + 0x30)
int32_t* eax

if (ebp s>= temp1)
    if (ebp s> temp1)
        eax.b = 0
        return eax
    
    int32_t temp2_1 = arg1[0xd]
    
    if (temp2_1 s>= ebx)
        if (temp2_1 s> ebx)
            eax.b = 0
            return eax
        
        int32_t temp3_1 = *(arg2 + 0x38)
        
        if (edx s>= temp3_1)
            if (edx s<= temp3_1)
                int32_t eax_1
                eax_1.b = *arg1 s< *arg2
                return eax_1
            
            eax.b = 0
            return eax

eax.b = 1
return eax
