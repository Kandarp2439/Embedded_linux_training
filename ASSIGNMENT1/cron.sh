#!/bin/bash -x

echo "$(crontab -l ; echo '30 18 * * * rm /home/kandarp/tmp/*')" | crontab -


