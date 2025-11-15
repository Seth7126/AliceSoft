// 函数: sub_464c10
// 地址: 0x464c10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t edi = arg1
char* esi = *(edi + 4)
int32_t ebx = *(edi + 8)
uint32_t result

if (&esi[4] u<= ebx)
    uint32_t ecx_7 = ((zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])) << 8 | zx.d(*esi)
    *(edi + 4) = &esi[4]
    
    if (&esi[8] u<= ebx)
        uint32_t esi_1 = 0
        arg1 = 0
        uint32_t ebp_7 =
            ((zx.d(esi[7]) << 8 | zx.d(esi[6])) << 8 | zx.d(esi[5])) << 8 | zx.d(esi[4])
        *(edi + 4) = &esi[8]
        
        if (ecx_7 s> 0)
            struct IEXArrayReader::exfile::CDefineDataArray::VTable** arg_8
            uint32_t* ebx_2 = &arg_8[5]
            uint32_t* var_4_1 = ebx_2
            
            while (true)
                struct IEXArrayReader::exfile::CDefineDataArray::VTable** eax_6 = sub_6e810c(0x10)
                arg_8 = eax_6
                arg_8 = eax_6
                *eax_6 = &exfile::CDefineDataArray::`vftable'{for `IEXArrayReader'}
                eax_6[1] = 0
                eax_6[2] = 0
                eax_6[3] = 0
                sub_42ccf0(ebx_2, &arg_8)
                int32_t ebx_3 = 0
                struct IEXArrayReader::exfile::CDefineDataArray::VTable** edx_1 =
                    *(*ebx_2 + ((ebx_2[1] - *ebx_2) s>> 2 << 2) - 4)
                arg_8 = edx_1
                
                if (ebp_7 s> 0)
                    do
                        if (*(edi + 4) + 4 u> *(edi + 8))
                            goto label_464d70
                        
                        char* ecx_12 = *(edi + 4)
                        uint32_t esi_8 =
                            ((zx.d(ecx_12[3]) << 8 | zx.d(ecx_12[2])) << 8 | zx.d(ecx_12[1])) << 8
                            | zx.d(*ecx_12)
                        *(edi + 4) = &ecx_12[4]
                        result = sub_45f690(edx_1, 0xffffffff)
                        
                        if (result == 0)
                            goto label_464d70
                        
                        if (sub_464810(esi_8, edi, result).b == 0)
                            goto label_464d70
                        
                        edx_1 = arg_8
                        ebx_3 += 1
                    while (ebx_3 s< ebp_7)
                    
                    esi_1 = arg1
                
                esi_1 += 1
                arg1 = esi_1
                
                if (esi_1 s>= ecx_7)
                    break
                
                ebx_2 = var_4_1
        
        result.b = 1
        return result

label_464d70:
result.b = 0
return result
