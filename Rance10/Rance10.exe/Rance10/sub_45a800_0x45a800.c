// 函数: sub_45a800
// 地址: 0x45a800
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
char* ecx = *(arg3 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&ecx[4] u<= *(arg3 + 8))
    uint32_t edi_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    *(arg3 + 4) = &ecx[4]
    
    if (sub_61ed80(arg3, arg1 + 0x34).b != 0)
        char* edx_1 = *(arg3 + 4)
        
        if (&edx_1[0x14] u<= *(arg3 + 8))
            uint32_t ecx_8 =
                ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
            *(arg3 + 4) = &edx_1[4]
            *(arg1 + 0x50) = ecx_8
            char* ecx_9 = *(arg3 + 4)
            uint32_t edx_8 =
                ((zx.d(ecx_9[3]) << 8 | zx.d(ecx_9[2])) << 8 | zx.d(ecx_9[1])) << 8 | zx.d(*ecx_9)
            *(arg3 + 4) = &ecx_9[4]
            *(arg1 + 0x54) = edx_8
            char* ecx_10 = *(arg3 + 4)
            uint32_t edx_15 = ((zx.d(ecx_10[3]) << 8 | zx.d(ecx_10[2])) << 8 | zx.d(ecx_10[1])) << 8
                | zx.d(*ecx_10)
            *(arg3 + 4) = &ecx_10[4]
            *(arg1 + 0x58) = edx_15
            char* ecx_11 = *(arg3 + 4)
            uint32_t edx_22 = ((zx.d(ecx_11[3]) << 8 | zx.d(ecx_11[2])) << 8 | zx.d(ecx_11[1])) << 8
                | zx.d(*ecx_11)
            *(arg3 + 4) = &ecx_11[4]
            *(arg1 + 0x5c) = edx_22
            char* ecx_12 = *(arg3 + 4)
            uint32_t edx_29 = ((zx.d(ecx_12[3]) << 8 | zx.d(ecx_12[2])) << 8 | zx.d(ecx_12[1])) << 8
                | zx.d(*ecx_12)
            *(arg3 + 4) = &ecx_12[4]
            *(arg1 + 0x4c) = edx_29
            
            if (sub_459b70(arg1 + 8, arg2, arg3).b != 0 && sub_61ec90(arg3, arg1 + 0x60).b != 0)
                *(arg1 + 4) = edi_7
                
                if (arg2 s< 1)
                    result.b = 1
                    return result
                
                if (arg2 s> 4)
                label_45a96d:
                    
                    if (sub_61ec90(arg3, arg1 + 0x64).b != 0 && sub_6c9300(arg3, arg1 + 0x68).b != 0
                            && sub_61ed80(arg3, arg1 + 0x6c).b != 0)
                        result.b = 1
                        return result
                else if (sub_6c9230(arg3, 4).b != 0)
                    goto label_45a96d

result.b = 0
return result
