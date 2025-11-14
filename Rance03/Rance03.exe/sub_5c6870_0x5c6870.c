// 函数: sub_5c6870
// 地址: 0x5c6870
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg1
esi[0x8d] -= 4
int32_t ebp = *esi[0x8d]
esi[0x8d] -= 4
int32_t edx = *esi[0x8d]
int32_t eax_4 = (esi[0x5e] - esi[0x5d]) s>> 2

if (ebp u< eax_4)
    eax_4 = esi[0x5d]
    void* ebx_1 = *(eax_4 + (ebp << 2))
    
    if (ebx_1 != 0)
        int32_t eax_7 = (esi[0x5e] - esi[0x5d]) s>> 2
        
        if (edx u< eax_7)
            eax_7 = esi[0x5d]
            arg1 = *(eax_7 + (edx << 2))
            
            if (arg1 != 0)
                int32_t eax_8
                int32_t ecx
                int32_t edx_1
                eax_8, ecx, edx_1 = sub_5d3d90(arg1, ebx_1)
                
                if (eax_8.b != 0)
                    return sub_5ddf10(&esi[0x88], ebp)
                
                char const* const var_14_1 = "copyString"
                return sub_5c2400(eax_8, edx_1, ecx, esi, "S_ASSIGN")
        
        int32_t var_14_3 = edx
        return sub_5c24e0(eax_7, edx, arg1, esi, 0x6e72b0)

return sub_5c24e0(eax_4, edx, arg1, esi, 0x6e7264)
