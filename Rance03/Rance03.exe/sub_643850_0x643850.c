// 函数: sub_643850
// 地址: 0x643850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_43c
int32_t eax_1 = __security_cookie ^ &var_43c
int32_t* ebx = arg4
int32_t* ecx = *ebx
int32_t eax_4 = ecx[3]
int32_t ebp = ecx[2]
var_43c = ebx
int32_t eax_6 = *ebx[4]
int32_t var_438 = ebp
int32_t esi = divs.dp.d(sx.q(ecx[1] - *ecx), ebp)
int32_t var_428 = esi
char var_204[0x200]
_memset(&var_204, 0, 0x200)
char var_404[0x200]
_memset(&var_404, 0, 0x200)
int32_t i = 0
int32_t i_1 = 0

if (ebx[2] s> 0)
    int32_t eax_11 = arg6
    
    do
        int32_t edi_1 = 0
        
        if (esi s> 0)
            do
                if (i == 0)
                    int32_t ebp_1 = 0
                    int32_t var_430_1 = 0
                    
                    if (eax_11 s> 0)
                        do
                            int32_t edx_2 = 1
                            int32_t* esi_1 = arg7[ebp_1] + (edi_1 << 2)
                            int32_t eax_14 = *esi_1
                            
                            if (eax_6 s> 1)
                                void* esi_2 = &esi_1[1]
                                
                                do
                                    eax_14 *= eax_4
                                    
                                    if (edx_2 + edi_1 s< var_428)
                                        eax_14 += *esi_2
                                    
                                    edx_2 += 1
                                    esi_2 += 4
                                while (edx_2 s< eax_6)
                                
                                ebp_1 = var_430_1
                                ebx = var_43c
                            
                            void* ebx_2 = ebx[4]
                            
                            if (eax_14 s>= *(ebx_2 + 4))
                                ebx = var_43c
                            else
                                void* ecx_2
                                
                                if (eax_14 s>= 0)
                                    ecx_2 = *(ebx_2 + 0xc)
                                
                                if (eax_14 s< 0 || eax_14 s>= *(ecx_2 + 4))
                                    ebx = var_43c
                                    ebx[9] = ebx[9]
                                else
                                    sub_637ef0(arg3, (*(ebx_2 + 0x14))[eax_14], 
                                        (*(ecx_2 + 8))[eax_14])
                                    ebx = var_43c
                                    ebx[9] += *((eax_14 << 2) + *(*(ebx_2 + 0xc) + 8))
                            
                            ebp_1 += 1
                            var_430_1 = ebp_1
                        while (ebp_1 s< arg6)
                        
                        i = i_1
                        esi = var_428
                    
                    ebp = var_438
                
                int32_t var_430_2 = 0
                
                if (eax_6 s> 0)
                    int32_t ebx_3 = eax_6
                    int32_t eax_21 = edi_1 * ebp
                    int32_t var_418_1 = eax_21
                    
                    while (edi_1 s< esi)
                        int32_t edx_5 = *ecx + eax_21
                        int32_t var_410_1 = edx_5
                        
                        if (arg6 s> 0)
                            int32_t* esi_4 = arg7
                            int32_t j_1 = arg6
                            int32_t ebp_3 = rol.d(1, i.b)
                            int32_t* eax_23 = arg5 - esi_4
                            int32_t j
                            
                            do
                                if (i == 0)
                                    int32_t eax_25 = *(*esi_4 + (edi_1 << 2))
                                    *(&var_404 + (eax_25 << 2)) += var_438
                                
                                int32_t ecx_4 = *(*esi_4 + (edi_1 << 2))
                                
                                if ((ecx[ecx_4 + 6] & ebp_3) == 0)
                                    i = i_1
                                else
                                    i = i_1
                                    int32_t eax_31 = *(*(var_43c[5] + (ecx_4 << 2)) + (i << 2))
                                    
                                    if (eax_31 != 0)
                                        int32_t var_450_2 = 0
                                        int32_t eax_35 = sub_6437c0(arg3, 
                                            *(eax_23 + esi_4) + (edx_5 << 2), var_438, eax_31)
                                        int32_t* ecx_5 = var_43c
                                        edx_5 = var_410_1
                                        ecx_5[8] += eax_35
                                        int32_t ecx_7 = *(*esi_4 + (edi_1 << 2))
                                        *(&var_204 + (ecx_7 << 2)) += eax_35
                                        i = i_1
                                
                                esi_4 = &esi_4[1]
                                j = j_1
                                j_1 -= 1
                            while (j != 1)
                            eax_21 = var_418_1
                            ebx_3 = eax_6
                            ebp = var_438
                            esi = var_428
                        
                        eax_21 += ebp
                        int32_t edx_7 = var_430_2 + 1
                        var_418_1 = eax_21
                        edi_1 += 1
                        var_430_2 = edx_7
                        
                        if (edx_7 s>= ebx_3)
                            goto label_643acc
                    
                    break
                
            label_643acc:
                ebx = var_43c
                eax_11 = arg6
            while (edi_1 s< esi)
            
            ebx = var_43c
            eax_11 = arg6
        
        i += 1
        i_1 = i
    while (i s< ebx[2])

sub_69a5bc(eax_1 ^ &var_43c)
return 0
