local lspsaga = require 'lspsaga'
lspsaga.setup {
  debug = false,
  use_saga_diagnostic_sign = true,
  -- diagnostic sign
  error_sign = "",
  warn_sign = "",
  hint_sign = "",
  infor_sign = "",
  diagnostic_header_icon = "  ",
  
  -- code action title icon
  code_action_icon = "",
  code_action_prompt = {
    enable = false,
    sign = false,
    sign_priority = 40,
    virtual_text = false,
  },
  finder_definition_icon = "  ",
  finder_reference_icon = "  ",
  max_preview_lines = 10,
  finder_action_keys = {
    open = "o",
    vsplit = "s",
    split = "i",
    quit = "q",
    scroll_down = "<C-j>",
    scroll_up = "<C-k>",
  },
  code_action_keys = {
    quit = "q",
    exec = "<CR>",
  },
  rename_action_keys = {
    quit = "<C-c>",
    exec = "<CR>",
  },
  definition_preview_icon = " ",
  border_style = "single",
  rename_prompt_prefix = "➤",
  rename_output_qflist = {
    enable = true,
    auto_open_qflist = true,
  },
  server_filetype_map = {},
  use_diagnostic_virtual_text = false,
  diagnostic_prefix_format = " %d. ",
  diagnostic_message_format = "%m %c",
  highlight_prefix = false,
}
