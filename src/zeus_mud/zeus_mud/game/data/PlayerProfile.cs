﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace zeus_mud.game.data
{
    public class PlayerProfile
    {
        public static UInt64 unique_id { get; set; }
        public static string email { get; set; }
        public static byte gender { get; set; }
        public static string nickname { get; set; }
        public static string register_ip { get; set; }
    }
}
