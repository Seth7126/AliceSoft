// 函数: sub_427e50
// 地址: 0x427e50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (char i = *arg1; i != 0; i = *arg1)
    if ((i u< 0x81 || i u> 0x9f) && (i u< 0xe0 || i u> 0xef))
        if (i == 0x5c)
            if (*arg1 != 0)
                return &arg1[1]
            
            break
        
        arg1 = &arg1[1]
    else
        arg1 = &arg1[2]

return 0
