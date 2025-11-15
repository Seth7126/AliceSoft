// 函数: sub_5564b0
// 地址: 0x5564b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
void* esi = arg3
uint32_t result = *(esi + 4)

if (result + 1 u<= *(esi + 8))
    bool cond:0_1 = *result == 1
    *(esi + 4) = result + 1
    result.b = cond:0_1
    *(arg1 + 0x70) = result.b
    char* ecx = *(esi + 4)
    
    if (&ecx[4] u<= *(esi + 8))
        uint32_t ebx_5 = (zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])
        result = zx.d(*ecx)
        *(esi + 4) = &ecx[4]
        void* edx_2 = *(arg1 + 0x98)
        uint32_t ebx_7 = ebx_5 << 8 | result
        void* ecx_1 = *(edx_2 + 0x7c)
        
        if (ecx_1 != 0)
            void* var_18_1 = ecx_1
            result, edx_2 = sub_4ee280(ecx_1)
        
        if (ecx_1 == 0 || result.b == 0)
            result.b = *(edx_2 + 0x23c)
            arg3.b = result.b
        else
            arg3.b = 1
        
        struct 
            common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable
            ** edi_1 = nullptr
        
        if (ebx_7 s> 0)
            void* ebp_1 = arg1 + 0x7c
            
            do
                char* edx_3 = *(esi + 4)
                
                if (&edx_3[4] u> *(esi + 8))
                    goto label_5565aa
                
                uint32_t ecx_8 = ((zx.d(edx_3[3]) << 8 | zx.d(edx_3[2])) << 8 | zx.d(edx_3[1])) << 8
                    | zx.d(*edx_3)
                *(esi + 4) = &edx_3[4]
                sub_555e00(arg1, ecx_8, edi_1)
                int32_t* ecx_10 = *ebp_1
                
                if (ecx_10 == 0)
                    goto label_5565aa
                
                if ((*(*ecx_10 + 0x44))(arg2, esi, arg3).b == 0)
                    goto label_5565aa
                
                edi_1 += 1
                ebp_1 += 4
            while (edi_1 s< ebx_7)
        
        result.b = 1
        return result

label_5565aa:
result.b = 0
return result
