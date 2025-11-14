// 函数: sub_5be400
// 地址: 0x5be400
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *(arg2 + 8)
char* ecx = *(arg2 + 4) + 4
void* result

if (ecx u<= edx)
    *(arg2 + 4) = ecx
    
    if (&ecx[4] u<= edx)
        uint32_t edi_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
        *(arg2 + 4) = &ecx[4]
        
        if (edi_7 s> 0)
            sub_5b6720(arg1, edi_7)
            int32_t esi_1 = 0
            
            if (edi_7 s> 0)
                int32_t ebx_1 = 0
                
                do
                    if (sub_5b64b0(*arg1 + ebx_1, arg2, esi_1).b == 0)
                        goto label_5be480
                    
                    esi_1 += 1
                    ebx_1 += 0x48
                while (esi_1 s< edi_7)
        
        result.b = 1
        return result

label_5be480:
result.b = 0
return result
